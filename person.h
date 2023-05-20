#pragma once
#include <string>
class person
{
    int id;
    std::string Name;
    int Age;
    bool Alive;

public:
    person(int id,std::string n, int a, bool alve);
    std::string getName() const;
    int getAge() const;
    bool isAlive() const;
    void setName(std::string n);
    void setAge(int a);
    void setAlive(bool al);

    int getId();
    std::string getName();
    int getAge();
    bool getAlive();
};
