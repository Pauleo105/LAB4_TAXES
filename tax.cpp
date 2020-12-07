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

    std::pair<std::list<Payment>::iterator, std::list<Payment>::iterator> Budget::getIt() {
        std::pair<std::list<Payment>::iterator, std::list<Payment>::iterator> tmp;
        tmp.first = ptr.begin();
        tmp.second = ptr.end();
        return tmp;
    }

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
        } while (getNum(sal) < 2);
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

    void Table::add(Budget* b, unsigned int num) {
        table.insert(std::pair<unsigned int, Budget*>(num, b));
    }

    int Table::find(Budget* &ptr, unsigned int a, unsigned int b) { //a- private num, b - contract number
        std::pair <std::multimap <unsigned int, Budget*>::iterator, std::multimap <unsigned int, Budget*>::iterator> pp;
        pp = table.equal_range(a);
        for (std::multimap <unsigned int, Budget*>::iterator tmp = pp.first; tmp != pp.second; tmp++) {
            std::string type =  (*tmp).second->getType();
            if ((*tmp).second->getType() == "Budget" && b == 0) {
                ptr = (*tmp).second;
                return 1;
            }
            else if ((*tmp).second->getType() == "Contract" && b == ((Contract*)tmp->second)->getContractNum()) {
                ptr = (*tmp).second; 
                return 1;
            }
        }
        ptr = (pp.first != pp.second) ? (*(pp.first)).second : nullptr;
        return 0;
    }

    int Table::ddelete(unsigned int a,unsigned int b) {
        Budget* ptr;
        if(!find(ptr, a, b)) return 0;
        else {
            std::pair <std::multimap <unsigned int, Budget*>::iterator, std::multimap <unsigned int, Budget*>::iterator> pp;
            pp = table.equal_range(a);
            for (std::multimap <unsigned int, Budget*>::iterator tmp = pp.first; tmp != pp.second; tmp++) {
                if ((*tmp).second == ptr) table.erase(tmp);
                break; 
            }
            return 1;
        }
    }

    double Table::counttax(unsigned int num) {
        double tax = 0;
        taxes::Budget* ptr;
        find(ptr, num, 0);
        if (ptr == nullptr) std::cout << "Person with this private number doesn't exist!" << std::endl;
        else {
            std::pair <std::multimap <unsigned int, taxes::Budget*>::iterator, std::multimap <unsigned int, taxes::Budget*>::iterator> pp;
            pp = table.equal_range(num);
            for (std::multimap <unsigned int, taxes::Budget*>::iterator tmp = pp.first; tmp != pp.second; tmp++) {
                for (std::list<Payment>::iterator tmp1 = tmp->second->getIt().first; tmp1 != tmp->second->getIt().second; tmp1++) {
                    tax += tmp1->getSum()*0.13;
                }
            }
        }
        return tax;
    }

    void Table::show() {
        std::cout << "\n" << "\e[1mTable: \e[0m" << std::endl << "------------------------------------------------------------" << std::endl;
        for (std::multimap <unsigned int, Budget*>::iterator it = table.begin(); it != table.end(); ++it) {
            std::cout << "\e[1mPrivate number: \e[0m" << (*it).first << std::endl << "\e[1mOther information: \e[0m" << std::endl << *((*it).second) << 
            "-------------------------------------------------------------" << std::endl;
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
        if (getNum(check) < 2) continue;
    } while(check < 0 || check > 7);
    std::cout.clear();
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
    } while (getNum(num) < 2);
    pr = "";
    std::cout << "Enter the type of the worker(contract - 1, budget - 0): ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(check) < 2 || (check != 0 && check != 1));
    pr = "";
    unsigned int contract = check ? getcontr() : 0;
    taxes::Budget* ptr = nullptr;
    if (!collisioncheck(tab, ptr, num, contract, check)) return 1;
    std::string name, sor, last;
    (ptr != nullptr) ? (name = ptr->getOnlyName(), sor = ptr->getOnlySorname(), last = ptr->getOnlyLastame()) : 
    (name = getstring("name"), sor = getstring("sorname"), last = getstring("lastname"));
    if (check) {
        taxes::Budget* b = new taxes::Contract(contract, sor, name, last, getstring("work"), getstring("post"));
        tab.add(b, num);
    }
    else {
        taxes::Budget* b = new taxes::Budget(sor, name, last, getstring("work"), getstring("post"));
        tab.add(b, num);
    }
    return 1;
}

int collisioncheck(taxes::Table& tab, taxes::Budget*& ptr, unsigned int& num, unsigned int& contract, int& check) {
    int pul = tab.find(ptr, num, contract);
    if (pul) {
        std::cout << "This contract already exists! Please choose another contract number." << std::endl;
        std::string temp;
        std::cout << "Continue?" << "\n" << "(Type y[Yes] or n [No]) ---> ";
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
    return temp;
}

int getcontr() {
    std::cout << "Enter contruct number: ";
    const char* pr = "";
    int contract;
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(contract) < 2);
    pr = "";
    return contract;
}

int find_m(taxes::Table& table) {
    unsigned int num;
    int check;
    const char* pr = "";
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) < 2);
    pr = "";
    std::cout << "Enter the type of the worker(contract - 1, budget - 0): ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(check) < 2 || (check != 0 && check != 1));
    pr = "";
    unsigned int contract = check ? getcontr() : 0;
    taxes::Budget* ptr;
    if (table.find(ptr, num, contract)) std::cout << "Your element is:" << std::endl << *ptr << std::endl;
    else std::cout << "Your element is not found!" << std::endl; 
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
    } while (getNum(num) < 2);
    pr = "";
    std::cout << "Enter the type of the worker(contract - 1, budget - 0): ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(check) < 2 || (check != 0 && check != 1));
    pr = "";
    unsigned int contract = check ? getcontr() : 0;
    if (!table.ddelete(num, contract)) std::cout << "This person doesn't exist!" << std::endl;
    else std::cout << "Deleted successfully!" << std::endl; 
    return 1;
}

int show_m(taxes::Table& table) {
    table.show();
    return 1;
}

int counttaxes_m(taxes::Table& table) {
    unsigned int num;
    const char* pr = "";
    std::cout << "Enter the private number: ";
    do {
        std::cout << pr;
        pr = "Error! Try again!\n";
    } while (getNum(num) < 2);
    unsigned int fin = table.counttax(num);
    std::cout << "Summary gain of person with id number \"" << num << "\" is " << fin << std::endl;
    return 1;
}
