#include "Event.h"

Event::Event(std::string n,
	int d, int m, int y,
	int h, int mm,
	int eh, int em,
	person*owner, person* with,
	EventType EventType) :
	eventName(n),
	day(d), month(m), year(y),
	startHr(h), startMin(mm),
	endHr(eh), endMin(em),
	owner(owner), with(with),
	type(EventType) {}

void Event::setName(std::string n) {
	eventName = n;
}

void Event::setDay(int d) {
	day = d;
}

void Event::setMonth(int m) {
	month = m;
}

void Event::setYear(int y) {
	year = y;
}

void Event::setHour(int h) {
	startHr = h;
}

void Event::setMinuts(int mm) {
	startMin = mm;
}

string Event::getName()
{
	return eventName;
}

string Event::getEventString()
{
	return string();
}

int Event::getDay() {
	return day;
}

int Event::getMonth() {
	return month;
}

int Event::getYear() {
	return year;
}

int Event::getStartHour() {
	return startHr;
}

int Event::getStartMin() {
	return startMin;
}

int Event::getEndHour()
{
	return endHr;
}

int Event::getEndMin()
{
	return endMin;
}

person* Event::getWith() {
	return with;
}

string Event::typeResolver(EventType ET)
{
	switch (ET) {
	case Event::APPOINTMENT:
		return "an appointment";
	case Event::COUNSELLING:
		return "a counselling";
	case Event::OPERATION:
		return "an operation";
	default:
		return string();
	}
}

