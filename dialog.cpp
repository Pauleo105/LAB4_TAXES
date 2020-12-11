#include <iostream>
#include <string>
#include <string.h>
#include "supportfunc.h"
#include "tax.h"
#include "dialogcor.h"
#include <list>
#include <map>
#include <sstream>

#define AMOUNT 7

int choise(const char* menu[]) {
    int check;
    const char* pr = "";
    do{
        std::cout << pr << std::endl;
        pr = "\nYou made a mistake! Try again!\n";
        for (int i = 0; i < AMOUNT; i++) std::cout << menu[i] << '\n';
        std::cout << "Make your choise: ";              //ПОЧЕМУ НЕ ВЫВОДИТСЯ СРАЗУ, ПОЧЕМУ ПРИ СТРОКЕ ЗАЦИКЛИВАЕТСЯ
    } while((getNum(check) != 0) || (check > (AMOUNT-1)));
    return check;
}

int add_m(taxes::Table& tab) {
    unsigned int num;
    int check;
    const char* pr = "";
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) > 0);
    pr = "";
    std::cout << "Enter the type of the worker(contract - 1, budget - 0): ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while ((getNum(check) > 0) || (check != 0 && check != 1));
    pr = "";
    unsigned int contract = check ? getcontr() : 0;
    taxes::Budget* ptr = nullptr;
    if (!collisioncheck(tab, ptr, num, contract, check)) return 1;
    std::string name, sur, last;
    if (ptr!=nullptr) {
        name = ptr->getOnlyName();
        sur = ptr->getOnlySurname();
        last = ptr->getOnlyLastame();
    }
    else {
        try{
            name = getstring("name");
            sur = getstring("surname");
            last = getstring("lastname");
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
            return 1;
        }
    }
    if (check) {
        taxes::Budget* b = new taxes::Contract(contract, sur, name, last, getstring("work"), getstring("post"));
        tab.add(b, num);
    }
    else {
        taxes::Budget* b = new taxes::Budget(sur, name, last, getstring("work"), getstring("post"));
        tab.add(b, num);
    }
    return 1;
}

int find_m(taxes::Table& table) {
    unsigned int num;
    int check;
    const char* pr = "";
    taxes::Budget* ptr;
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) > 0);
    table.find(ptr, num, 0);
    if (ptr == nullptr) {
        std::cout << "\nYour element is not found!" << std::endl;
        return 1;
    }
    pr = "";
    std::cout << "Enter the type of the worker(contract - 1, budget - 0): ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while ((getNum(check) > 0) || (check != 0 && check != 1));
    pr = "";
    unsigned int contract = check ? getcontr() : 0;
    if (table.find(ptr, num, contract)) std::cout << "\nYour element is:" << std::endl << *ptr << std::endl;
    else std::cout << "\nYour element is not found!" << std::endl; 
    return 1;
}

int delete_m(taxes::Table& table) {
    unsigned int num;
    int check;
    const char* pr = "";
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) > 0);
    pr = "";
    std::cout << "Enter the type of the worker(contract - 1, budget - 0): ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while ((getNum(check) > 0) || (check != 0 && check != 1));
    pr = "";
    unsigned int contract = check ? getcontr() : 0;
    if (!table.ddelete(num, contract)) std::cout << "This person doesn't exist!" << std::endl;
    else std::cout << "Deleted successfully!" << std::endl; 
    return 1;
}

int show_m(taxes::Table& table) {
    std::stringstream ss;
    table.show(ss);
    std::cout << ss.str();
    return 1;
}

int counttaxes_m(taxes::Table& table) {
    unsigned int num;
    const char* pr = "";
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) > 0);
    unsigned int fin = table.counttax(num);
    std::cout << "Summary gain of person with id number \"" << num << "\" is " << fin << std::endl;
    return 1;
}

int correct_m(taxes::Table& table) {
    unsigned int num;
    int check;
    const char* pr = "";
    taxes::Budget* ptr;
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) > 0);
    table.find(ptr, num, 0);
    if (ptr == nullptr) {
        std::cout << "\nYour element doesn't found!" << std::endl;
        return 1;
    }
    pr = "";
    std::cout << "Enter the type of the worker(contract - 1, budget - 0): ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while ((getNum(check) > 0) || (check != 0 && check != 1));
    pr = "";
    unsigned int contract = check ? getcontr() : 0;
    if (table.find(ptr, num, contract)) showsub(*ptr);
    else std::cout << "\nYour element doesn't found!" << std::endl; 
    return 1;
}