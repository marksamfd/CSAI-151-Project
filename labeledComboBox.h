#pragma once
#include "wx/wx.h"
#include "wx/combobox.h"
#include <vector>
class labeledComboBox : public wxControl {
private:
	wxWindow* parent;
	wxWindowID winid;
	wxString label;
	std::vector<wxString> choices;
	const wxPoint& pos;
	wxStaticText* inputLabel = new wxStaticText(parent, winid, label, pos, wxDefaultSize, wxDEFAULT_FRAME_STYLE);
	wxComboBox* comboBox2 = new wxComboBox(parent, winid,wxEmptyString);

public:
	labeledComboBox(
		wxWindow* parent,
		wxWindowID winid,
		wxString label,
		std::vector<wxString> choices,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize
	);


};

