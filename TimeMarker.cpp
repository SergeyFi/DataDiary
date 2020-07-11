#include "TimeMarker.h"


void TimeMarker::add_time_to_data(std::vector<Data>& data_array)
{
    for (Data& data : data_array)
    {
        if (data.time == 0)
        {
            data.time = std::time(0);
        }
    }
}
