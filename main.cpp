#include <iostream>
#include <string>
#include "tax.h"
#include "dialog.h"

int main() {
    taxes::Table table;
    int ch;
    while (ch = choise(menu)) {
        if (!fptr[ch](table)) break;
    }
    return 0;
}