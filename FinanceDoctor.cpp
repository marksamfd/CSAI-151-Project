#include "FinanceDoctor.h"
FinanceDoctor::FinanceDoctor(int day, int month, int year, double doctorSalary) : Finance(day, month, year), salary(doctorSalary) {}

void FinanceDoctor::setSalary(double doctorSalary) {
    salary = doctorSalary;
}

void FinanceDoctor::addOutcome(double cost, string type) {
    income -= cost;
    outcome = outcome + cost;
    //addDonation(cost, type);
}

void FinanceDoctor::addIncome(double cost, string type) {
    income = income + cost;
    //cout << "Added income: " << cost << type << endl;
}
