#pragma once
#include "schedule.h"
#include "patient.h"
#include "Doctor.h"
class department{
public:
	struct DateTime
	{
		int dayNI, sHr, sMin, eHr, eMin;
	};
	void addPatient(patient p);
	void addDoctor(Doctor doc);
	void removePatient(int pos);
	void removeDoctor(int pos);

private:
	string name;
	vector<DateTime> AllOfficeHrs;
	vector<patient> allPatients;
	vector<Doctor> allDoctors;
	vector<Event> depEvents;
};

