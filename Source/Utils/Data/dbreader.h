#ifndef DBREADER_H
#define DBREADER_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


#include "signal_row.h"

class DBReader
{
public:
	explicit DBReader(std::string& data_file);
	
	void ReadFile();

	std::vector<SignalRow> GetData(std::size_t size) const;	

private:
	std::string db_path;
	std::vector<SignalRow> data;
};

#endif // DBREADER_H