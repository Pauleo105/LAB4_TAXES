#include <iostream>
#include <string>
#include <string.h>
#include "supportfunc.h"
#include "tax.h"
#include <list>
#include <map>
#include <sstream>
#include <limits>

int getNum(unsigned int& a) {
        std::cin >> a;
        if (!std::cin.good())  {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return 1; //почему азцикливается со строками
        }
        return 0;
    };

int getNum(int& a) {
        std::cin >> a;
        if (!(std::cin.good()) || (a < 0)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return 1;
        }
        return 0;
    };

int collisioncheck(taxes::Table& tab, taxes::Budget*& ptr, unsigned int& num, unsigned int& contract, int& check) {
    int pul = tab.find(ptr, num, contract);
    if (pul) {
        std::cout << "This contract already exists! Please choose another contract number." << std::endl;
        std::string temp;
        std::cout << "Continue?" << "\n" << "(Type y[Yes] or n[No]) ---> ";
        std::cin >> temp;
        if (temp != "y") return 0;
        check = 1;
        contract = getcontr();
        if (collisioncheck(tab, ptr, num, contract, check)) return 1;
        else return 0;
    }
    return 1;
}

std::string getstring(const std::string what) {
    std::string temp;
    std::cout << "Please enter " << what << ": ";
    std::cin >> temp;
    if (temp.length() == 0) throw std::runtime_error("Invalid input!");
    return temp;
}

int getcontr() {
    std::cout << "Enter contruct number: ";
    const char* pr = "";
    int contract;
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(contract) > 0);
    pr = "";
    return contract;
}