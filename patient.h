#pragma once
#include <string>;
#include <vector>;
#include "Event.h"
#include "patientHistory.h"
class patient : public patientHistory,public person {
private:
    char bloodChar;
    bool positive;
    double income;
    std::vector<Event> appointments;
public:
    patient(int id, std::string name, int age, bool alive, char bloodChar, bool positive);
    void addIncome(double cost, std::string type);
    char getBloodChar() const;
    bool isPositive() const;
    double getIncome() const;
    int addAppointment(Event e);
};


