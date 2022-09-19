//
// Created by UserPC on 9/18/2022.
//

#ifndef TP_2_LAB_2_AEROFLOTUI_H
#define TP_2_LAB_2_AEROFLOTUI_H
#include "AEROFLOT.h"
#include <cstring>
#include "check.h"

class AeroflotUI {
private:
    AEROFLOT** flights;
    unsigned int count_of_flights;

public:
    AeroflotUI() noexcept;
    ~AeroflotUI() noexcept;

    void show_flights_to_certain_destination(const char* destination);
    void show_flights();

    void append_flight() noexcept;
    void delete_flight();

private:
    AEROFLOT* create_new_flight() noexcept;
    void append_flight_to_array(AEROFLOT* new_flight) noexcept;
    void initialization(AEROFLOT* flight) noexcept;
    void sort_and_append(AEROFLOT* flight) noexcept;

    int choose_flight();
    void delete_flight_from_array(int flight) noexcept;


};


#endif //TP_2_LAB_2_AEROFLOTUI_H
