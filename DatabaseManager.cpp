#include "DatabaseManager.h"


DatabaseManager::DatabaseManager(std::string file_name)
{
    this->file_name = file_name;
}

void DatabaseManager::safe_data_to_file(const std::vector<Data>& data_array)
{
    std::ofstream File;

    File.open(file_name, std::ios_base::app);

    for (auto data : data_array)
    {
        File << data.name << ' ' << data.value << ' ' << data.time << '\n';
    }

    File.close();
}
