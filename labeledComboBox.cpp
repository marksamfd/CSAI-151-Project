#include "labeledComboBox.h"

labeledComboBox::labeledComboBox(
	wxWindow* parent,
	wxWindowID winid,
	wxString label,
	std::vector<wxString> choices,
	const wxPoint& pos,
	const wxSize& size
) :parent(parent), winid(winid),
label(label), choices(choices),
pos(pos) {

	comboBox2->SetPosition({
			pos.x + 10 + comboBox2->GetSize().GetWidth() ,
			pos.y
		});
	comboBox2->Append(choices);
	comboBox2->SetSelection(0);
}