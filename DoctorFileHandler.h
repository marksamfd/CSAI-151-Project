#pragma once
#include "FileHandler.h"
#include "Doctor.h"
class DoctorFileHandler :
    public CSVFileHandler
{
private:
    std::vector <Doctor> Doctors;

public:
    DoctorFileHandler(std::string path);
    std::vector<std::string> vectorize(Doctor d);
    std::vector <Doctor> getAll();
    int addDoctor(Doctor d);
    int removeDoctor(int i);
    int saveFile();

};

