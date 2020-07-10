#pragma once
#include <string>

struct Data
{
    std::string data_name;
    std::string data_value;
    unsigned long long int data_time;

    Data(std::string data_name, std::string data_value)
    {
        this->data_name = data_name;
        this->data_value = data_value;
        data_time = 0;
    }
};
