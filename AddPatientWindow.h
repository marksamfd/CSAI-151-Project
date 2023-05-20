#pragma once
#include "wx/wx.h"
#include "wx/combobox.h"
#include "labeledTextField.h"
#include "labeledSpinCtrl.h"
#include "labeledComboBox.h"
#include "EventListCtrl.h"
#include "vector"
#include "Event.h"

class AddPatientWindow : public wxMDIChildFrame {
public:
	AddPatientWindow(wxMDIParentFrame* parent);
private:
	wxPanel* fieldsContainer = new wxPanel(this);

	labeledTextField* patientName = new labeledTextField(fieldsContainer, wxID_ANY, _T("Patient Name"), { 10,50 });
	labeledSpinCtrl* patientAge = new labeledSpinCtrl(fieldsContainer, wxID_ANY, _T("Patient Age") ,{ 10, 85 });
	labeledComboBox* bloodType = new labeledComboBox(fieldsContainer, wxID_ANY, _T("Blood Type"), { _T("A"),_T("B"),_T("O") }, { 10,115 });
	/*EventListCtrl* allEv = new EventListCtrl(fieldsContainer, wxID_ANY,
		{Event("d",5,4,2023,12,45,1,45,new person(),new person(),Event::APPOINTMENT),
		Event(",mmmm",5,4,2023,12,45,1,45,new person(),new person(),Event::APPOINTMENT) },
		{10,150}
	);*/
};