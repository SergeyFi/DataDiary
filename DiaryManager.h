#pragma once

#include "DataParser.h"
#include "DatabaseManager.h"
#include "DiaryInput.h"
#include "DiaryOutput.h"
#include "TimeMarker.h"
#include <vector>

class DiaryManager
{
public:

    DiaryManager();

    void main_cicle();

private:
    
    DataParser* Data_parser;
    DiaryOutput* Diary_output;
    DiaryInput* Diary_input;
    DatabaseManager* Data_base_manager;
    TimeMarker* Time_marker;
    
};
