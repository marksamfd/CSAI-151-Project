#include "DoctorFileHandler.h"

DoctorFileHandler::DoctorFileHandler(std::string path):CSVFileHandler(path)
{
	std::vector<std::vector<std::string>> vectorizedData = CSVFileHandler::getData();
	for (std::vector<std::string> vectDoc : vectorizedData) {
		Doctors.push_back(Doctor(
			stoi(vectDoc[0]),
			vectDoc[1],
			stoi(vectDoc[2]),
			stoi(vectDoc[3]),
			stoi(vectDoc[4]),
			stoi(vectDoc[5])
		));
	}
}

std::vector<std::string> DoctorFileHandler::vectorize(Doctor d)
{
	return std::vector<std::string>({ 
		to_string(d.getId()),
		d.getName(),
		to_string(d.getSalary()),
		to_string(d.getDep()),
		to_string(d.getAge()),
		to_string(d.getAlive())
		});
}

std::vector<Doctor> DoctorFileHandler::getAll()
{
	return std::vector<Doctor>(Doctors);
}

int DoctorFileHandler::saveFile()
{
	std::vector<std::vector<std::string>> allVectorized;
	for (Doctor d : Doctors) {
		allVectorized.push_back(vectorize(d));
	}
	CSVFileHandler::setData(allVectorized);
	CSVFileHandler::saveFile("id,name,salary,dep,age,alive");
	return 0;
}
