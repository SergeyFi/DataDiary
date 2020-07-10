#pragma once
#include <vector>

#include "Data.h"

class DiaryOutput
{
public:

    void version();
    void hello();
    void debug_data_output(std::vector<Data> data_array);
    void goodbye();
};
