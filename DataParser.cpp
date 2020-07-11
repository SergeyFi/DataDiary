#include "DataParser.h"


void DataParser::check_data()
{
    check_input_termination();
}

void DataParser::process_raw_data()
{   
    data_raw += space_char;
    
    std::vector<Data> data_array;

    std::string data_name;
    std::string data_value_string;

    
    bool isName = true;
    
    for (int i = 0; i < data_raw.length(); i++)
    {   
        if (data_raw[i] == space_char)
        {
            if (isName)
            {
                isName = false;
            }
            else
            {
                isName = true;

                data_array.push_back(Data(data_name, data_value_string));

                data_name.clear();
                data_value_string.clear();
            }
            
            continue;
        }

        if (!isName)
        {
            data_value_string += data_raw[i];
        }

        if (isName)
        {
            data_name += data_raw[i];
        }
    }

    data_previous = data_array;
}

void DataParser::check_input_termination()
{
    auto data_prepared = remove_spaces(data_raw);
    
    for (auto terminator_string : termination_strings)
    {
        if (terminator_string == data_prepared)
        {
            abort_input();
        }
    }
}

std::string DataParser::remove_spaces(const std::string& string)
{
    std::string new_string;
    
    for (int i = 0; i < string.length(); i++)
    {
        if (string[i] != space_char)
        {
            new_string += string[i];
        }
    }

    return new_string;
}

DataParser::DataParser()
{
    input_abort = false;
}

void DataParser::parse_data(const std::string& data_raw)
{
    data.insert(data.end(), data_previous.begin(), data_previous.end());
    
    this->data_raw = data_raw;
    
    check_data();
    
    if (!input_abort)
    {
        process_raw_data();
    }
}

bool DataParser::input_is_abort()
{
    return  input_abort;
}

const std::vector<Data>& DataParser::get_data_read() const
{
    return  data;
}

std::vector<Data>& DataParser::get_data_write()
{
    return  data;
}

void DataParser::abort_input()
{
    input_abort = true;
}
