#pragma once
#include <string>

class DiaryInput
{
protected:
    
    std::string data_raw;
    
public:

    void input_data();
    std::string get_data_raw();
};
