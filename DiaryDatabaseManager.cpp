#include "DiaryDatabaseManager.h"

#include <fstream>

DiaryDatabaseManager::DiaryDatabaseManager(std::string file_name)
{
    this->file_name = file_name;
}

void DiaryDatabaseManager::safe_data_to_file(std::vector<Data> data_array)
{
    std::ofstream File;

    File.open(file_name, std::ios_base::app);

    for (auto data : data_array)
    {
        File << data.data_name << ' ' << data.data_value << ' ' << data.data_time << '\n';
    }

    File.close();
}
