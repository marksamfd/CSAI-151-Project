#include "labeledTextField.h"

labeledTextField::labeledTextField(wxWindow* parent,
	wxWindowID winid,
	const wxString& label,
	const wxPoint& pos,
	const wxSize& size) :
	label(label),
	pos(pos),
	size(size), parnt(parent), wid(winid) {
	textCtrl->SetPosition({
		pos.x + 10 + inputLabel->GetSize().GetWidth() ,
		pos.y
		});
	
}

wxString labeledTextField::getValue()
{
	return textCtrl->GetValue();
}

