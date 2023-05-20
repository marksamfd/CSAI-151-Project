#include "MainWindow.h"
#include "AddPatientWindow.h"
#include <fstream>
#include "DoctorFileHandler.h"
//#include <ios>

MainWindow::MainWindow() : wxMDIParentFrame(NULL, wxID_ANY, "Hello World") {
	this->Maximize(true);
	

	wxMenu* menuFile = new wxMenu;
	menuFile->Append(1, "&Hello...\tCtrl-H",
		"Help string shown in status bar for this menu item");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);

	wxMenu* menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);

	wxMenu* patientMenu = new wxMenu;
	patientMenu->Append(0,"Add Patient");
	patientMenu->Append(1,"View Patients");
	patientMenu->Append(2,"Search for a Patient");


	wxMenu* DoctorsMenu = new wxMenu;
	DoctorsMenu->Append(3, "Add Doctor");
	DoctorsMenu->Append(4, "View Doctor");
	DoctorsMenu->Append(5, "Search for a Patient");

	wxMenu* DepartmentsMenu = new wxMenu;
	DepartmentsMenu->Append(6, "Add Department");
	DepartmentsMenu->Append(7, "View Department");
	DepartmentsMenu->Append(8, "Edit Department Office Hours");
	DepartmentsMenu->Append(9, "Search for a Patient");


	wxMenuBar* menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&File");
	menuBar->Append(patientMenu, "&Patient");
	menuBar->Append(DoctorsMenu, "&Doctors");
	menuBar->Append(DepartmentsMenu, "&Departments");
	menuBar->Append(menuHelp, "&Help");

	SetMenuBar(menuBar);

	DoctorFileHandler dh("./DB/doctor.csv");

	

	wxStaticText* text = new wxStaticText(this, wxID_ANY, dh.getAll()[0].getName(), {27,20}, wxDefaultSize, wxDEFAULT_FRAME_STYLE);
	

	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");

	Bind(wxEVT_MENU, &MainWindow::OnHello, this, 1);
	Bind(wxEVT_MENU, &MainWindow::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &MainWindow::OnExit, this, wxID_EXIT);
	Bind(wxEVT_MENU, &MainWindow::OnPatientAdd, this, 0);

}

void MainWindow::OnExit(wxCommandEvent& event)
{
	Close(true);
}

void MainWindow::OnAbout(wxCommandEvent& event)
{
	wxMessageBox("This is a wxWidgets Hello World example",
		"About Hello World", wxOK | wxICON_INFORMATION);
}

void MainWindow::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello world from wxWidgets!");
}

void MainWindow::OnPatientAdd(wxCommandEvent& event)
{
	wxMDIChildFrame* add = new AddPatientWindow(this);
	add->Show(true);
}

void MainWindow::OnPatientSearch(wxCommandEvent& event)
{
}

void MainWindow::OnPatientView(wxCommandEvent& event)
{
}
