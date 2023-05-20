#pragma once
#include "Finance.h"
class FinanceDoctor :
    public Finance
{
private:
    double salary;

public:
    FinanceDoctor(int day, int month, int year, double doctorSalary);

    void setSalary(double doctorSalary);

    void addOutcome(double cost, string type);

    void addIncome(double cost, string type);
};

