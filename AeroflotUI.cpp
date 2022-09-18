//
// Created by UserPC on 9/18/2022.
//

#include "AeroflotUI.h"

AeroflotUI::AeroflotUI() {
    count_of_flights = 0;
    flights = nullptr;
}

void AeroflotUI::show_flights_to_certain_destination(const char *destination) {
    for (int i = 0, j = 0; i < count_of_flights; ++i) {
        if (strcmp(flights[i]->get_destination(), destination)){
            std::cout << j++ + 1 << "." << std::endl;
            flights[i]->show();
        }
    }
}

void AeroflotUI::show_flights() {
    if (count_of_flights == 0) {
        throw "There are no flights";
    }
    for (int i = 0; i < count_of_flights; ++i) {
        std::cout << i+1 << "." << std::endl;
        flights[i]->show();
    }
}

void AeroflotUI::append_flight() {
    AEROFLOT* new_flight = create_new_flight();

    append_flight_to_array(new_flight);
}

void AeroflotUI::delete_flight() {
    if (count_of_flights == 0) {
        throw "There are no flights";
    }
    int choice = choose_flight();

    delete_flight_from_array(choice);
}

void AeroflotUI::delete_flight_from_array(int flight) {
    AEROFLOT** new_flights = new AEROFLOT * [count_of_flights-1];
    for (int i = 0, j = 0; i < count_of_flights; ++i) {
        if(i == (flight-1))
            continue;
        new_flights[j++] = flights[i];
    }
    delete[] flights;
    flights = new_flights;
}

int AeroflotUI::choose_flight() {
    int choice;
    show_flights();
    std::cout << "Choose flight" << std::endl;
    //TODO: add an exception
    std::cin >> choice;
    return choice;
}

AEROFLOT* AeroflotUI::create_new_flight() {
    AEROFLOT* flight = new AEROFLOT();

    return flight;
}

void AeroflotUI::append_flight_to_array(AEROFLOT *new_flight) {
    if (count_of_flights == 0) {
        initialization(new_flight);
    }
    else {
        sort_and_append(new_flight);
    }
}

void AeroflotUI::sort_and_append(AEROFLOT *flight) {
    AEROFLOT** new_flights = new AEROFLOT * [count_of_flights+1];
    //TODO: make sort
    /*
    for (int i = 0, j = 0; i < count_of_flights;) {
        if (flights[i]->get_flight_number() > flight->get_flight_number() && !isInsert){
            new_flights[j++] = flight;
            isInsert = true;
        }
        new_flights[j++] = flights[i++];
    }
    */

    ++count_of_flights;

    delete[] flights;
    flights = new_flights;
}

void AeroflotUI::initialization(AEROFLOT* flight) {
    flights = new AEROFLOT*[1];
    flights[0] = flight;
    ++count_of_flights;
}