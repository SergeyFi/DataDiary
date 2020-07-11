#pragma once

#include <vector>
#include <iostream>
#include <ostream>
#include "Data.h"

class DiaryOutput
{
public:

    void print_version();
    void print_hello();
    void print_debug_data_output(const std::vector<Data>& data_array);
    void print_goodbye();
};
