#pragma once
#include <string>

struct Data
{
    std::string name;
    std::string value;
    unsigned long long int time;

    Data(std::string name, std::string value)
    {
        this->name = name;
        this->value = value;
        time = 0;
    }
};
