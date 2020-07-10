#include "DiaryManager.h"

#include <vector>

#include "DataParser.h"

DiaryManager::DiaryManager()
{
    Data_parser = new DataParser();
    Diary_output = new DiaryOutput();
    Diary_input = new DiaryInput();
    Data_base_manager = new DiaryDatabaseManager("DiaryDataBase.txt");
    Time_marker = new TimeMarker();
}

void DiaryManager::main_cicle()
{
    Diary_output->hello();

    while (!Data_parser->input_is_abort())
    {
        Diary_input->input_data();
        Data_parser->parse_data(Diary_input->get_data_raw());
        Time_marker->add_time_to_data(Data_parser->get_data_ref());
        Data_base_manager->safe_data_to_file(Data_parser->get_data());
    }

    //Diary_output->debug_data_output(Data_parser->get_data());
    Diary_output->goodbye();
}
