#pragma once
#include "DataParser.h"
#include "DiaryDatabaseManager.h"
#include "DiaryInput.h"
#include "DiaryOutput.h"
#include "TimeMarker.h"

class DiaryManager
{

protected:
    
    DataParser* Data_parser;
    DiaryOutput* Diary_output;
    DiaryInput* Diary_input;
    DiaryDatabaseManager* Data_base_manager;
    TimeMarker* Time_marker;
    
public:

    DiaryManager();

    void main_cicle();
};
