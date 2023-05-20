#include "patient.h"
#include <iostream>
patient::patient(int id, std::string name, int age, bool alive, char bloodChar, bool positive):person(id,name, age,alive) {
    this->bloodChar = bloodChar;
    this->positive = positive;
    income = 0;
}

void patient::addIncome(double cost, std::string type) {
    income += cost;
    std::cout << "Added income of " << cost << " to patient "  << " under type " << type << std::endl;
}

char patient::getBloodChar() const {
    return bloodChar;
}

bool patient::isPositive() const {
    return positive;
}

double patient::getIncome() const {
    return income;
}

int patient::addAppointment(Event e) {
       
    appointments.push_back(e);
    return 0;
}
