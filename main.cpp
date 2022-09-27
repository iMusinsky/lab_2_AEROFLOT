#include <iostream>

#include "AeroflotUI.h"
#include "file_line.h"

void try_delete_flight(AeroflotUI& UI) {
    try {
        UI.delete_flight();
    }
    catch (const char* msg){
        std::cout << msg << std::endl;
    }
}

void try_show_flights(AeroflotUI& UI) {
    try {
        UI.show_flights();
    }
    catch (const char* msg){
        std::cout << msg << std::endl;
    }
}

void try_show_flights_to_certain_destination(AeroflotUI& UI) {
    char destination[64];
    std::cin >> destination;
    try {
        UI.show_flights_to_certain_destination(destination);
    }
    catch (const char* msg){
        std::cout << msg << std::endl;
    }
}

void AeroflotUi_switch(AeroflotUI& UI, const int& choice, bool& go) {
    switch (choice) {
        case 1:
            UI.append_flight();
            break;
        case 2:
            try_delete_flight(UI);
            break;
        case 3:
            try_show_flights(UI);
            break;
        case 4:
            try_show_flights_to_certain_destination(UI);
            break;
        default:
            go = false;
            break;
    }
}

void AeroflotUi_loop() {
    AeroflotUI UI;
    int choice;
    bool go = true;

    do {
        std::cout << "1. Add new flight\n"
                     "2. Delete flight\n"
                     "3. Show all flights\n"
                     "4. Show flights to certain destination\n"
                     "5. Exit" << std::endl;

        std::cin >> choice;

        AeroflotUi_switch(UI, choice, go);
    } while (go);
}

void reader_from_file() {
    try {
        Reader reader;
    }
    catch (const char* msg) {
        std::cout << msg << std::endl;
    }
}

void main_switch(const int& choice, bool& go) {
    switch (choice) {
        case 1:
            AeroflotUi_loop();
            break;

        case 2:
            reader_from_file();
            break;

        case 3:
            go = false;
            break;

        default:
            std::cout << "Incorrect input" << std::endl;
            break;
    }
}

void main_loop() {
    int choice;
    bool go = true;
    do {
        std::cout << "1. Aeroflot\n"
                     "2. Reader from file\n"
                     "3. Exit" << std::endl;
        choice = get_int();

        main_switch(choice, go);
    } while (go);
}

int main() {

    main_loop();

    return 0;
}