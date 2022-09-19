//
// Created by UserPC on 9/18/2022.
//

#ifndef TP_2_LAB_2_AEROFLOT_H
#define TP_2_LAB_2_AEROFLOT_H
#include <iostream>
#include "check.h"

class AEROFLOT {
private:
    char destination[64];
    unsigned int flight_number;
    char aircraft_type[64];

public:
    AEROFLOT();
    AEROFLOT(const AEROFLOT& copy) noexcept;

    char* get_destination() noexcept;
    unsigned int get_flight_number() noexcept;
    char* get_aircraft_type() noexcept;

    void show() noexcept;

};


#endif //TP_2_LAB_2_AEROFLOT_H
