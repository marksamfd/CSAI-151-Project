#include "FileHandler.h"
#include <fstream>

CSVFileHandler::CSVFileHandler(std::string fD):fileDist(fD)
{
    using namespace std;
    ifstream file(fileDist);
    if (file.is_open()) {
        string line;
        int lineIndex(0);
        while (getline(file, line)) {
            if (lineIndex == 0) {
                lineIndex++;
                continue;
            }
            vector<string> tokens;
            string token;
            for (char c : line) {
                if (c == ',') {
                    tokens.push_back(token);
                    token = "";
                }
                else {
                    token += c;
                }
            }
            tokens.push_back(token);

            data.push_back(tokens);
        }


        file.close();
    }
}

std::vector<std::vector<std::string>> CSVFileHandler::getData()
{
    return std::vector<std::vector<std::string>>(data);
}

void CSVFileHandler::setData(std::vector<std::vector<std::string>> newParsedData)
{
    data = newParsedData;
}

void CSVFileHandler::saveFile(std::string header)
{
    using namespace std;
    ofstream file(fileDist);
    if (file.is_open()) {
        file << header << std::endl;
        for (vector<string> row : data) {

            for (int i = 0; i < row.size(); i++) {
                file << row[i];
                if (i < row.size() - 1) {
                    file << ",";
                }
            }
            file << endl;
        }
        file.close();
    }
}
