#include "AddPatientWindow.h"
#include <iostream>
#include "patient.h"


AddPatientWindow::AddPatientWindow(wxMDIParentFrame* parent) :wxMDIChildFrame(parent, wxID_ANY, wxEmptyString) {
	SetClientSize(640, 480);
	fieldsContainer->SetSize(640, 480);
	std::cout << patientName->getValue();


	patient p();
}
