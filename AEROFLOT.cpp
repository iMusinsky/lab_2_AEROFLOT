//
// Created by UserPC on 9/18/2022.
//

#include "AEROFLOT.h"

AEROFLOT::AEROFLOT() {
    std::cout << "Destination: ";
    std::cin >> destination;
    if(!*destination)
        throw "Incorrect input";

    std::cout << "Flight number: ";
    flight_number = get_int();
    if(flight_number <= 0)
        throw "Incorrect input";

    std::cout << "Aircraft type: ";
    std::cin >> aircraft_type;
    if(!*aircraft_type)
        throw "Incorrect input";
}

AEROFLOT::AEROFLOT(const AEROFLOT &copy) noexcept{
    for (int i = 0; copy.destination[i] != '\0'; ++i) {
        this->destination[i] = copy.destination[i];
    }
    this->flight_number = copy.flight_number;
    for (int i = 0; copy.aircraft_type[i] != '\0'; ++i) {
        this->aircraft_type[i] = copy.aircraft_type[i];
    }
}

char* AEROFLOT::get_destination() noexcept{
    return destination;
}

unsigned int AEROFLOT::get_flight_number() noexcept{
    return flight_number;
}

char* AEROFLOT::get_aircraft_type() noexcept{
    return aircraft_type;
}

void AEROFLOT::show() noexcept{
    std::cout << "Destination: " << destination << std::endl;
    std::cout << "Flight number: " << flight_number << std::endl;
    std::cout << "Aircraft type: " << aircraft_type << std::endl;
}