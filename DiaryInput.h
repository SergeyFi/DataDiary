#pragma once

#include <iostream>
#include <string>

class DiaryInput
{
public:

    void input_data();
    std::string get_data_raw();
    
private:
    
    std::string data_raw;
    
};
