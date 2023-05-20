#pragma once
#include <vector>
#include "patientDisease.h"
class patientHistory {
private:
    std::vector<patientDisease> diseases;
public:
    void addDisease(patientDisease disease);
    void removeDisease(int index);
    std::vector<patientDisease> getAllDiseases() const;
};