#pragma once
#include<string>
#include<vector>
class CSVFileHandler
{
private:
	std::string fileDist;
	std::vector<std::vector<std::string>> data;
public:
	CSVFileHandler(std::string fD);
	std::vector<std::vector<std::string>> getData();
	void setData(std::vector<std::vector<std::string>> newParsedData);
	void saveFile(std::string header);
};

