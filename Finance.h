#pragma once
#include <string>
using std::string;

class Finance
{
protected:
    double income;
    double outcome;
    struct Date {
        int day;
        int month;
        int year;
    } date;

public:
    Finance(int d, int m, int y);

    void addDonation(double cost, std::string type);

    void addIncome(double cost, std::string type);
};

