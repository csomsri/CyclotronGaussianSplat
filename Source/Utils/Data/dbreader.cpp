#include "dbreader.h"

DBReader::DBReader(std::string& data_file) { }

void DBReader::OpenFile() {
	// Try and Catch Error for file opening
    std::ifstream file("data_file");
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    
}

