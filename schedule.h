#pragma once
#include <vector>
#include "Event.h"
class schedule {
private:
	vector<Event> events;
public:
	schedule(vector<Event> es) : events(es) {

	}

	string getIcs();
	int addAppointment(Event e);
	void removeAppointment(int id);


};

