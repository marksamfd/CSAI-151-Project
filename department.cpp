#include "department.h"

void department::addPatient(patient p)
{
	allPatients.push_back(p);
}

void department::addDoctor(Doctor doc)
{
	allDoctors.push_back(doc);
}

void department::removePatient(int pos)
{
	allPatients.erase(allPatients.begin() + pos);
}

void department::removeDoctor(int pos)
{
	allDoctors.erase(allDoctors.begin() + pos);
}
