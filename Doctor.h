#pragma once
#include <string>
#include <vector>
#include "Event.h"
class Doctor :public person {
private:
	int salary;
	int dep;
	std::vector <Event> appointments;
public:
	Doctor(int id, std::string name, int salary,int dep,int age,int alive);
	int getSalary();
	int getDep();
	void setSalary(int sal);
	void setDep(int dep);
};

