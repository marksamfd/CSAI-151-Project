#pragma once
#include "wx/listctrl.h"
#include "Event.h"
class EventListCtrl :
    public wxListCtrl
{
private:
    vector<Event *> allEv;
public:
    EventListCtrl(wxWindow* parent, wxWindowID id, vector<Event *> ev, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize);
};

