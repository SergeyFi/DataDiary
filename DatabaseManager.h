#pragma once

#include <string>
#include <vector>
#include <fstream>

#include "Data.h"

class DatabaseManager
{
public:

    explicit DatabaseManager(std::string file_name);

    void safe_data_to_file(const std::vector<Data>& data_array);
    
private:
    
    std::string file_name;
    

};
