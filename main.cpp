#include <iostream>
#include <string>
#include "tax.h"

const char* menu[6] = {"0. Quit", "1. Add element", "2. Find the element", "3. Delete the element", "4. Show table", "5. Count taxes"};
int (*fptr[])(taxes::Table&) = {nullptr, add_m, find_m, delete_m, show_m, counttaxes_m};

int main() {
    taxes::Table table;
    int ch;
    while (ch = choise(menu)) {
        if (!fptr[ch](table)) break;
    }
    return 0;
}