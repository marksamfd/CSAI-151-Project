#pragma once
#include "wx/wx.h"
class labeledTextField : public wxControl {
public:
	labeledTextField(wxWindow* parent,
		wxWindowID winid,
		const wxString& label,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize);
	wxString getValue();

private:
	wxWindow* parnt;
	wxWindowID wid;
	const wxString& label;
	const wxPoint& pos = wxDefaultPosition;
	const wxSize& size = wxDefaultSize;
	wxStaticText* inputLabel = new wxStaticText(parnt, wid,label, pos,wxDefaultSize,wxDEFAULT_FRAME_STYLE);
	wxTextCtrl* textCtrl = new wxTextCtrl(parnt, wid, wxEmptyString);
};

