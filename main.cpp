#include <iostream>
#include "AeroflotUI.h"

int main() {
    AeroflotUI UI;

    UI.append_flight();
    UI.append_flight();
    UI.append_flight();
    UI.append_flight();

    UI.show_flights();

    UI.delete_flight();
    UI.show_flights();


    return 0;
}
