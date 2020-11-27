#include <iostream>
#include <string>
#include "tax.h"

const char* menu[5] = {"0. Quit", "1. Add element", "2. Find the element", "3. Delete the element", "4. Show table"};
int (*fptr[])(taxes::Table&) = {nullptr, add_m, find_m, delete_m, show_m};

int main() {
    taxes::Table table;
    int ch;
    while (ch = choise(menu)) {
        if (!fptr[ch](table)) break;
    }
    // taxes::Payment ork;
    // std::cout << ork << std::endl;
    // taxes::Payment ork1(1,2);
    // std::cout << ork1 << std::endl;
    // ork1.setSumm(12999);
    // std::cout << ork1 << std::endl;
    // ork1.setType("Mops");
    // std::cout << ork1 << std::endl;

    // taxes::Budget por("Abdulkin", "Pavel");
    // //por.addPayment();
    // std::cout << por;

    // taxes::Contract pir;
    // std::cout << pir;
    return 0;
}