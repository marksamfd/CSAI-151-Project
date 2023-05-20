#include "schedule.h"

string schedule::getIcs() {
	string ics = "BEGIN:VCALENDAR\n"
		"VERSION:2.0\n"
		"PRODID : -//hacksw/handcal//NONSGML v1.0//EN\n";
	for (auto i : events) {
		ics +=i.getEventString();
	}
	ics += "END:VCALENDAR";

	return ics;
}
