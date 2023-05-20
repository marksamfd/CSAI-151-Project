#pragma once
#include <string>
#include <cmath>
class patientDisease {
private:
    std::string diseaseName;
    time_t diagnosisDate;
    time_t recoveryDate;
public:
    patientDisease(std::string name, time_t date, time_t recovery = 0);
    std::string getDiseaseName() const;
    time_t getDiagnosisDate() const;
    time_t getRecoveryDate() const;
};