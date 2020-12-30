#include <iostream>
#include <string>
#include "tax.h"
#include "dialog.h"
#include "mylist.h"

int main() {
    // mine::list<int> a, b;
    // a.addBack(55);
    // a.addBack(77);
    // a.addBack(99);
    // a.addFront(44);
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    taxes::Table table;
    int ch;
    while (ch = choise(menu)) {
        if (!fptr[ch](table)) break;
    }
    return 0;
}