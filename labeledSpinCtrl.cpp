#include "labeledSpinCtrl.h"

labeledSpinCtrl::labeledSpinCtrl(wxWindow* parent,
	wxWindowID winid,
	wxString label,
	const wxPoint& pos, 
	int initialValue, 
	int minValue,
	int maxValue,
	const wxSize& size) :
	initValue(initialValue),pos(pos),
	size(size), parnt(parent),label(label),
	wid(winid),minValue(minValue),maxValue(maxValue)
{
	spinCtrl->SetPosition({
			pos.x + 10 + inputLabel->GetSize().GetWidth() ,
			pos.y
		});
	spinCtrl->SetValue(initialValue);
	spinCtrl->SetRange(minValue,maxValue);

}

int labeledSpinCtrl::getValue()
{
	return spinCtrl->GetValue();
}
