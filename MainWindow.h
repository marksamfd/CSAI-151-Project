#pragma once
#include "wx/wx.h"
class MainWindow:public wxMDIParentFrame {
public:
	MainWindow();
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    void OnPatientAdd(wxCommandEvent& event);
    void OnPatientSearch(wxCommandEvent& event);
    void OnPatientView(wxCommandEvent& event);


};

