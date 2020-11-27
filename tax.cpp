#include <iostream>
#include <string>
#include <string.h>
#include "tax.h"
#include <list>
#include <map>

namespace taxes {
    Payment::Payment(int dd, int mm, std::string ttype, unsigned int sum): type(ttype), summ(sum) {
        if (dd > 31 || dd < 1) throw std::runtime_error("Invalid input!");
        date.tm_mday = dd;
        if (mm > 11 || mm < 0) throw std::runtime_error("Invalid input!");
        date.tm_mon = mm;
        date.tm_year = 120;
    }

    Payment::Payment(std::string ttype, unsigned int sum): type(ttype), summ(sum){
        date.tm_mday = 1;
        date.tm_mon = 0;
        date.tm_year = 120;
    }

    Payment::Payment(unsigned int sum): type("Salary"), summ(sum){
        date.tm_mday = 1;
        date.tm_mon = 0;
        date.tm_year = 120;
    }

    void Payment::setDate(int dd, int mm) {
        if (dd > 31 || dd < 1) throw std::runtime_error("Invalid input!");
        date.tm_mday = dd;
        if (mm > 11 || mm < 0) throw std::runtime_error("Invalid input!");
        date.tm_mon = mm;
        date.tm_year = 120;
    }

    std::ostream& operator <<(std::ostream& c, const Payment& p) {
            c << "Date: " << std::put_time(&(p.date), "%d/%m/%Y") << ", Type: " << p.type << ", Amount: " << p.summ << "\n";
            return c;
        }

    std::ostream& Budget::print(std::ostream& c) const{
        c << "Full name: " << sorname+' ' << name+' ' << lastname << ", workplace: " << workplace << ", post: " << post << "\n";
        c << "List of payments: " << std::endl;
        int i = 1;
        for (auto tmp = ptr.begin(); tmp!= ptr.end(); tmp++, i++) c << i << ") " << *tmp;
        c << std::endl;
        return c;
    };

    unsigned int Budget::getGain() const {
        unsigned int gain = 0;
        const char* pr = "";
        std::string typ;
        std::cout << "Enter the type: ";
        std::cin >> typ;
        for (Payment tmp: ptr) {
            if (typ == tmp.getType()) gain += tmp.getSum();
        };
        std::cout << "Gain for 2020 year by " << typ << ": " << gain << "\n";
        return gain;
    };

    std::ostream& operator <<(std::ostream&c, const Budget& b) {
        return b.print(c);
    };

    void Budget::addPayment() {
        std::tm t;
        std::string typ;
        unsigned int sal;
        const char* pr = "";
        std::cout << "Enter the date of this payment in format of dd.mm: ";
        std::cin >> std::get_time(&t, "%d.%m");
        t.tm_year = 120;
        std::cout << "\nEnter the type of this payment: ";
        std::cin >> typ;
        std::cout << "\nEnter the amount of money: ";
        do {
            std::cout << pr;
            pr = "Error! Try again!\n";
        } while (getNum(sal) < 0);
        std::cout << std::endl;
        Payment p(t.tm_mday, t.tm_mon, typ, sal);
        ptr.push_back(p);
    }

    std::ostream& Contract::print(std::ostream&c) const{
        c << "Contract number: " << contractnum << "\n";
        Budget::print(c);
        return c;
    }

    std::ostream& operator <<(std::ostream& c, const Contract& p) {
        p.print(c);
        return c;
    }

    Budget* Table::find(int a, int b) {
        std::map <unsigned int, std::list<Budget>>::iterator it;
        it = table.find(a);
        if (it == table.end()) return nullptr;
        for (auto ptr = it->second.begin(); ptr != it->second.end(); ptr++) {
            if ((*ptr).getType() == "Budget" && b == 0) return &(*ptr);
            else if ((*ptr).getType() == "Contract") {
                Contract* pp = (Contract*)&(*ptr);
                if (pp->getContractNum() == b) return pp;
            }
        }
        return nullptr;
    }

    void Table::ddelete(int a, int b) {
        Budget* ptr = find(a, b);
        if (ptr != nullptr) {
            std::map <unsigned int, std::list<Budget>>::iterator it;
            it = table.find(a);
            for (auto tmp = it->second.begin(); tmp != it->second.end(); tmp++) {
                if (&*tmp == ptr) {
                    it->second.erase(tmp);
                    break;
                }
            }
            if (it->second.empty()) table.erase(it);
        }
        else throw std::runtime_error("No such element!");
    }

    void Table::show() {
        std::cout << "Private number" << "\t\t" << "Other information" << std::endl;
        for (auto it : table) {
            for (auto tmp = it.second.begin(); tmp != it.second.end(); tmp++) {
                std::cout << it.first << "\t\t" << *tmp << std::endl;
            }
        }
    }
}

int choise(const char* menu[]) {
    int check;
    const char* pr = "";
    do{
        std::cout << pr << std::endl;
        pr = "You made a mistake! Try again!";
        for (int i = 0; i < 9; i++) std::cout << menu[i] << '\n';
        std::cout << "Make your choise: ";
        if (getNum(check) < 0) continue;
    } while(check < 0 || check > 8);
    std::cout.clear();
    return check;
}

int add_m(taxes::Table& table) { //BEDA
    unsigned int num;
    int check;
    const char* pr = "";
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) < 0);
    std::cout << "Enter the type(budget - 1/contract - 0): ";
    pr = "";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(check) < 0 || (check != 1 && check != 0));
    std::cout << "Write divided by whitespace following data: ";
    if (!check) std::cout << "contract number, ";
    std::cout << "day and month of payment, type of payment, summ, sorname, name, lastname, workplace, post: ";
    unsigned int cnum;
    int d, m, sum;
    std::string type, sorname, name, lastname, workplace, post;
    if (!check) std::cin >> cnum;
    std::cin >> d >> m >> type >> sum >> sorname >> name >> lastname >> workplace >> post;
    if (!check) {
        taxes::Contract bb(cnum, d, m, type, sum, sorname, name, lastname, workplace, post);
        table.add(bb, num);
    }
    else {
        taxes::Budget bb(d, m, type, sum, sorname, name, lastname, workplace, post);
        table.add(bb, num);
    }
    return 1;
}

int find_m(taxes::Table&) {
    return 1;
}

int delete_m(taxes::Table&) {
    return 1;
}

int show_m(taxes::Table& table) {
    table.show();
    return 1;
}
