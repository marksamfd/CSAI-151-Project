#pragma once
#include <wx/wx.h>
#include <wx/spinctrl.h>

class labeledSpinCtrl :public wxControl{
public:
	labeledSpinCtrl(wxWindow* parent,
		wxWindowID winid,
		wxString label,
		const wxPoint& pos,
		int initialValue = 20,
		int minValue = 0,
		int maxValue = 150,
		const wxSize& size = wxDefaultSize);
	int getValue();
private:
	wxWindow* parnt;
	wxWindowID wid;
	int initValue,minValue,maxValue;
	wxString label;
	const wxPoint& pos = wxDefaultPosition;
	const wxSize& size = wxDefaultSize;
	wxStaticText* inputLabel = new wxStaticText(parnt, wid, label, pos, wxDefaultSize, wxDEFAULT_FRAME_STYLE);
	wxSpinCtrl* spinCtrl = new wxSpinCtrl(parnt,wid,wxEmptyString);

};

