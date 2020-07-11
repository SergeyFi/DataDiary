#include "DiaryOutput.h"


void DiaryOutput::print_version()
{
    std::cout << "Data diary v 0.1" << std::endl;
}

void DiaryOutput::print_hello()
{
    print_version();
    std::cout << "For exit enter the 'exit', 'x' or nothing" << std::endl << std::endl;
    std::cout << "Please enter a name for value and the value itself" << std::endl << std::endl;
    
}

void DiaryOutput::print_debug_data_output(const std::vector<Data>& data_array)
{
    for (auto data : data_array)
    {
        std::cout << data.name << std::endl;
        std::cout << data.value << std::endl;
        std::cout << data.time<< std::endl << std::endl;
    }
}

void DiaryOutput::print_goodbye()
{
    std::cout << "Thanks for using the program !" << std::endl;
}
