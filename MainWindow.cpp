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
	patientMenu->Append(20,"Add Patient");
	patientMenu->Append(21,"View Patients");
	patientMenu->Append(21,"Search for a Patient");


	wxMenu* DoctorsMenu = new wxMenu;
	patientMenu->Append(20, "Add Doctor");
	patientMenu->Append(21, "View Doctor");
	patientMenu->Append(21, "Search for a Patient");


	wxMenuBar* menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&File");
	menuBar->Append(patientMenu, "&Patient");
	menuBar->Append(menuHelp, "&Help");

	SetMenuBar(menuBar);

	DoctorFileHandler dh("./DB/doctor.csv");

	

	wxStaticText* text = new wxStaticText(this, wxID_ANY, dh.getAll()[0].getName(), {27,20}, wxDefaultSize, wxDEFAULT_FRAME_STYLE);
	

	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");

	Bind(wxEVT_MENU, &MainWindow::OnHello, this, 1);
	Bind(wxEVT_MENU, &MainWindow::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &MainWindow::OnExit, this, wxID_EXIT);
	Bind(wxEVT_MENU, &MainWindow::OnPatientAdd, this, 20);

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
