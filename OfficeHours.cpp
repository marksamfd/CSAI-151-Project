#include "OfficeHours.h"

DateTime::DateTime(Days day, int hr, int min, int eHr, int eMin):DayName(day),hr(hr),min(min),eHr(eHr),eMin(eMin)
{
}

DateTime::Days DateTime::getDayName()
{
	return DayName;
}
