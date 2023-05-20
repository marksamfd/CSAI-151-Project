#include "EventListCtrl.h"
#include <vector>
EventListCtrl::EventListCtrl(wxWindow* parent, wxWindowID id, vector<Event *> ev, const wxPoint& pos , const wxSize& size):wxListCtrl(parent,id, pos,size, wxLC_REPORT | wxSIMPLE_BORDER),allEv(ev)
{
	this->AppendColumn("Time", wxLIST_FORMAT_LEFT, 120);
	this->AppendColumn("Type", wxLIST_FORMAT_LEFT, 120);
	this->AppendColumn("With", wxLIST_FORMAT_LEFT, 120);

	int c = 0;
	for (Event *el : allEv) {
		
		this->InsertItem(c, el->getDay());
		this->SetItem(c, 1, el->getName());
		this->SetItem(c, 2, el->getEventString());
		c++;
	}
}
