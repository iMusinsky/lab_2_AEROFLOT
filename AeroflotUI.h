//
// Created by UserPC on 9/18/2022.
//

#ifndef TP_2_LAB_2_AEROFLOTUI_H
#define TP_2_LAB_2_AEROFLOTUI_H
#include "AEROFLOT.h"
#include <cstring>
class AeroflotUI {
private:
    AEROFLOT** flights;
    unsigned int count_of_flights;

public:
    AeroflotUI();

    void show_flights_to_certain_destination(const char* destination);
    void show_flights();

    void append_flight();
    void delete_flight();

private:
    AEROFLOT* create_new_flight();
    void append_flight_to_array(AEROFLOT* new_flight);
    void initialization(AEROFLOT* flight);
    void sort_and_append(AEROFLOT* flight);

    int choose_flight();
    void delete_flight_from_array(int flight);


};


#endif //TP_2_LAB_2_AEROFLOTUI_H
