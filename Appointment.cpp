#include "Appointment.h"

string Appointment::getEventString()
{
	string title = "You Have " + type + " With" + Event::getWith()->getName();

	return string("BEGIN:VEVENT\n"
		"UID:uid1@example.com\n"
		"SUMMERY:" + title + "\n"
		"DTSTAMP:" + to_string(Event::getYear()) + to_string(Event::getMonth()) + to_string(Event::getDay()) + "T" + to_string(Event::getStartHour()) + to_string(Event::getStartMin()) + "0000Z\n"
		"DTSTART:" + to_string(Event::getYear()) + to_string(Event::getMonth()) + to_string(Event::getDay()) + "T" + to_string(Event::getStartHour()) + to_string(Event::getStartMin()) + "0000Z\n"
		"DTEND:" + to_string(Event::getYear()) + to_string(Event::getMonth()) + to_string(Event::getDay()) + "T" + to_string(Event::getEndHour()) + to_string(Event::getEndMin()) + "0000Z\n"
		"END:VEVENT\n");
}
