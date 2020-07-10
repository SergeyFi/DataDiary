#include "TimeMarker.h"

#include<ctime>

void TimeMarker::add_time_to_data(std::vector<Data> &data_array)
{
    for (Data& data : data_array)
    {
        if (data.data_time == 0)
        {
            data.data_time = std::time(0);
        }
    }
}
