#include <iostream>
#include <string>
#include <string.h>
#include "tax.h"

void date::setDate() {
    int d, m, y;
    std::cout << "Please, enter the date -->";
    std::cin >> d >> m >> y;
    if (d > 31 || d < 1 || m > 12 || m < 0) throw std::runtime_error("Invalid input!");
    dd = d, mm = m, yy = y;
}

namespace taxes {

}