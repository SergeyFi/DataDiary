#pragma once

#include "Data.h"
#include <string>
#include <vector>

class DataParser
{
protected:

    std::vector<Data> data_previous;
    
    std::vector<Data> data;

    std::string data_raw;

    std::vector<std::string> termination_strings {"", "x", "exit", "end"};

    bool input_abort;

    void check_data();

    void process_raw_data();

    void check_input_termination();

    std::string remove_spaces(const std::string string);
    
public:

    DataParser();
    
    void parse_data(std::string data_raw);

    bool input_is_abort();

    std::vector<Data> get_data();

    std::vector<Data>& get_data_ref();

    void abort_input();
    
};
