#include "DiaryInput.h"

void DiaryInput::input_data()
{
    std::getline(std::cin, data_raw);
}

std::string DiaryInput::get_data_raw()
{
    return data_raw;
}
