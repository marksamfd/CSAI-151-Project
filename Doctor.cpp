#include "Doctor.h"

Doctor::Doctor(int id, std::string name, int salary, int dep, int age, int alive):person(id,name,age,alive),salary(salary),dep(dep)
{
}

int Doctor::getSalary()
{
	return salary;
}

int Doctor::getDep()
{
	return dep;
}

void Doctor::setSalary(int sal)
{
	salary = sal;
}

void Doctor::setDep(int dep)
{
	this->dep = dep;
}
