#include "person.h"
person::person(int id,std::string n, int a, bool alve):id(id),Name(n),Age(a),Alive(alve)
{
}
std::string person::getName() const {
    return Name;
}

int person::getAge() const {
    return Age;
}

bool person::isAlive() const {
    return Alive;
}

void person::setName(std::string n)
{
    Name = n;
}

void person::setAge(int a)
{
    Age = a;
}

void person::setAlive(bool al)
{
    Alive = al;
}

int person::getId()
{
    return id;
}

std::string person::getName()
{
    return std::string(Name);
}

int person::getAge()
{
    return Age;
}

bool person::getAlive()
{
    return Alive;
}
