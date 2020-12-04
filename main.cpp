#include <iostream>
#include <string>
#include "tax.h"

const char* menu[5] = {"0. Quit", "1. Add element", "2. Find the element", "3. Delete the element", "4. Show table"};
int (*fptr[])(taxes::Table&) = {nullptr, add_m, find_m, delete_m, show_m};

int main() {
    // taxes::Table table;
    // int ch;
    // while (ch = choise(menu)) {
    //     if (!fptr[ch](table)) break;
    // }
    taxes::Budget* b;
    taxes::Contract* c;
    taxes::Contract a;
    b = &a;
    c = &a;
    std::cout << (*b).getType() << std::endl;;
    std::cout << (*c).getContractNum() << std::endl;
    return 0;
}