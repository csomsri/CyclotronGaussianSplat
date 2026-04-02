#ifndef DBREADER_H
#define DBREADER_H

#include <string>
#include <iostream>
#include <vector>


#include "signal_row.h"

class DBReader
{
public:
	explicit DBReader(std::string& data_file);
	
	void OpenFile(std::string& data_file);
	void CloseFile();

	std::vector<SignalRow> GetData(std::size_t size) const;	

private:
	std::string db_path;


};

#endif // DBREADER_H