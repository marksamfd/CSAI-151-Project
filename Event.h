#pragma once
#include <string>
#include "person.h"
using namespace std;
class Event {
public:
	enum EventType
	{
		APPOINTMENT,
		COUNSELLING,
		OPERATION
	};
	Event(std::string name,
		int d, int m, int y,
		int h, int mm,
		int eh, int em,
		person* owner, person* with,
		EventType EventType);
	void setName(std::string n);
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	void setHour(int h);
	void setMinuts(int mm);
	int getDay();
	int getMonth();
	int getYear();
	int getStartHour();
	int getStartMin();
	int getEndHour();
	int getEndMin();
	person* getWith();
	string getName();
	virtual string getEventString();
private:
	std::string eventName;
	int day, month, year,
		startHr, startMin,
		endHr, endMin;
	person* owner, *with;
	EventType type = APPOINTMENT;
	string typeResolver(EventType);

};

