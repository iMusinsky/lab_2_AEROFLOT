//
// Created by UserPC on 9/18/2022.
//

#ifndef TP_2_LAB_2_AEROFLOT_H
#define TP_2_LAB_2_AEROFLOT_H
#include <iostream>

class AEROFLOT {
private:
    char destination[64];
    unsigned int flight_number;
    char aircraft_type[64];

public:
    AEROFLOT();
    AEROFLOT(const AEROFLOT& copy);

    char* get_destination();
    unsigned int get_flight_number();
    char* get_aircraft_type();

    void show();

};


#endif //TP_2_LAB_2_AEROFLOT_H
