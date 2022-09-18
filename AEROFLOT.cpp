//
// Created by UserPC on 9/18/2022.
//

#include "AEROFLOT.h"

AEROFLOT::AEROFLOT() {
    std::cout << "Destination: ";
    std::cin >> destination;
    if(!*destination)
        throw "Incorrect input";

    //TODO: add an exception
    std::cout << "Flight number: ";
    std::cin >> flight_number;

    std::cout << "Aircraft type: ";
    std::cin >> aircraft_type;
    if(!*aircraft_type)
        throw "Incorrect input";
}

AEROFLOT::AEROFLOT(const AEROFLOT &copy) {
    for (int i = 0; copy.destination[i] != '\0'; ++i) {
        this->destination[i] = copy.destination[i];
    }
    this->flight_number = copy.flight_number;
    for (int i = 0; copy.aircraft_type[i] != '\0'; ++i) {
        this->aircraft_type[i] = copy.aircraft_type[i];
    }
}

char* AEROFLOT::get_destination() {
    return destination;
}

unsigned int AEROFLOT::get_flight_number() {
    return flight_number;
}

char* AEROFLOT::get_aircraft_type() {
    return aircraft_type;
}

void AEROFLOT::show() {
    std::cout << "Destination: " << destination << std::endl;
    std::cout << "Flight number: " << flight_number << std::endl;
    std::cout << "Aircraft type: " << aircraft_type << std::endl;
}