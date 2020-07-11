#pragma once

#include "Data.h"
#include <string>
#include <vector>
#include <locale>

class DataParser
{
    
public:

    DataParser();
    
    void parse_data(const std::string& data_raw);

    bool input_is_abort();

    const std::vector<Data>& get_data_read() const;

    std::vector<Data>& get_data_write();

    void abort_input();
    
private:

    std::vector<Data> data_previous;
    
    std::vector<Data> data;

    std::string data_raw;

    const std::vector<std::string> termination_strings {"", "x", "exit", "end"};

    const char space_char = ' ';

    bool input_abort;

    void check_data();

    void process_raw_data();

    void check_input_termination();

    std::string remove_spaces(const std::string& string);
    
};
