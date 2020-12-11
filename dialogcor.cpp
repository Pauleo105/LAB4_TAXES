#include "dialogcor.h"

const char* typess[2] = {"Budget", "Contract"}; //да, дублирование, а как сделать types global
const char* submenu[8] = {"0. Back", "1. Change surname", "2. Change name", "3. Change lastname", "4. Change work", "5. Change post", "6. Add payment", "7. Change contract number"};
int (*fptrsub[])(taxes::Budget&) = {nullptr, surname_s, name_s, lastname_s, work_s, post_s, payment_s, contract_s};


int choise_s(const char* submenu[], taxes::Budget& ptr) {
    int check;
    const char* pr = "";
    int n = 8;
    do{
        std::cout << pr << std::endl;
        pr = "\nYou made a mistake! Try again!\n";
        if (ptr.getType() == typess[0]) n = 7;
        for (int i = 0; i < n; i++) std::cout << submenu[i] << '\n';
        std::cout << "Make your choise: ";
    } while((getNum(check) != 0) || (check > (n-1)));
    return check;
}

void showsub(taxes::Budget& ptr) {
    int ch;
    while (ch = choise_s(submenu, ptr)) {
        if (!fptrsub[ch](ptr)) break;
    }
}

int surname_s(taxes::Budget& ptr) {
    try {
        ptr.setName(getstring("surname"));
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 1;
}

int name_s(taxes::Budget& ptr) {
    try {
        ptr.setSurname(getstring("name"));
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 1;
}

int lastname_s(taxes::Budget& ptr) {
    try {
        ptr.setLastname(getstring("lastname"));
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 1;
}

int work_s(taxes::Budget& ptr) {
    try {
        ptr.setWorkplace(getstring("workplace"));
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 1;
}

int post_s(taxes::Budget& ptr) {
    try {
        ptr.setPost(getstring("post"));
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 1;
} 

int payment_s(taxes::Budget& ptr) {

    return 1;
}

int contract_s(taxes::Budget& ptr) {
    ((taxes::Contract*)(&ptr))->setNum(getcontr());
    return 1;
}
