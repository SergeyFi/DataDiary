#include "DiaryManager.h"


DiaryManager::DiaryManager()
{
    Data_parser = new DataParser();
    Diary_output = new DiaryOutput();
    Diary_input = new DiaryInput();
    Data_base_manager = new DatabaseManager("DiaryDataBase.txt");
    Time_marker = new TimeMarker();
}

void DiaryManager::main_cicle()
{
    Diary_output->print_hello();

    while (!Data_parser->input_is_abort())
    {
        Diary_input->input_data();
        Data_parser->parse_data(Diary_input->get_data_raw());
        Time_marker->add_time_to_data(Data_parser->get_data_write());
        Data_base_manager->safe_data_to_file(Data_parser->get_data_read());
    }

    //Diary_output->print_debug_data_output(Data_parser->get_data_read());
    Diary_output->print_goodbye();
}
