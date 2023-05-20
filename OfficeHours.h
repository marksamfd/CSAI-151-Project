#pragma once
class DateTime
{

public:
	enum DaysN
	{
		SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SUNDAY
	};
	DateTime(DaysN day, int hr, int min, int eHr, int eMin);
	DateTime(int day, int month, int year, int hr, int min);
	DaysN getDayName();
private:
	int hr, min, eHr, eMin, day, month, year;
	DaysN DayName;

};

