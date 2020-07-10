#include "DiaryOutput.h"

#include <iostream>
#include <ostream>


void DiaryOutput::version()
{
    std::cout << "Data diary v 0.1" << std::endl;
}

void DiaryOutput::hello()
{
    version();
    std::cout << "For exit enter the 'exit', 'x' or nothing" << std::endl << std::endl;
    std::cout << "Please enter a name for value and the value itself" << std::endl << std::endl;
    
}

void DiaryOutput::debug_data_output(std::vector<Data> data_array)
{
    for (auto data : data_array)
    {
        std::cout << data.data_name << std::endl;
        std::cout << data.data_value << std::endl;
        std::cout << data.data_time<< std::endl << std::endl;
    }
}

void DiaryOutput::goodbye()
{
    std::cout << "Thanks for using the program !" << std::endl;
}
