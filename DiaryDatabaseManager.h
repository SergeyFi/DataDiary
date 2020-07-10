#pragma once
#include <string>
#include <vector>

#include "Data.h"

class DiaryDatabaseManager
{

    std::string file_name;
    
public:

    explicit DiaryDatabaseManager(std::string file_name);

    void safe_data_to_file(std::vector<Data> data_array);
};
