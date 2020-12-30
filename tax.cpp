#include <iostream>
#include <string>
#include <string.h>
#include "supportfunc.h"
#include "tax.h"
#include <list>
#include <map>
#include <sstream>

namespace taxes {
    const char* types[2] = {"Budget", "Contract"};

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
        c << "Full name: " << surname+' ' << name+' ' << lastname << ", workplace: " << workplace << ", post: " << post << "\n";
        c << "List of payments: " << std::endl;
        int i = 1;
        for (auto tmp = ptr.begin(); tmp!= ptr.end(); tmp++, i++) c << i << ") " << *tmp;
        if (ptr.begin() == ptr.end()) c << "Empty";
        c << std::endl;
        return c;
    };

    std::pair<std::list<Payment>::iterator, std::list<Payment>::iterator> Budget::getIt() {
        std::pair<std::list<Payment>::iterator, std::list<Payment>::iterator> tmp;
        tmp.first = ptr.begin();
        tmp.second = ptr.end();
        return tmp;
    }

    unsigned int Budget::getGain(std::string typ) const {
        unsigned int gain = 0;
        for (Payment tmp: ptr) {
            if (typ == tmp.getType()) gain += tmp.getSum();
        };
        return gain;
    };

    std::ostream& operator <<(std::ostream&c, const Budget& b) {
        return b.print(c);
    };

    std::string Budget::getType() const {return types[0];}

    std::string Contract::getType() const {return types[1];};

    std::ostream& Contract::print(std::ostream&c) const{
        c << "Contract number: " << contractnum << "\n";
        Budget::print(c);
        return c;
    }

    std::ostream& operator <<(std::ostream& c, const Contract& p) {
        p.print(c);
        return c;
    }

    Table::~Table() {
        for (std::multimap <unsigned int, Budget*>::iterator tmp = table.begin(); tmp != table.end(); tmp++) {
            delete tmp->second;
        }
    }

    bool Table::find(Budget* &ptr, unsigned int privat, unsigned int contract) {
        std::pair <std::multimap <unsigned int, Budget*>::iterator, std::multimap <unsigned int, Budget*>::iterator> pp;
        pp = table.equal_range(privat);
        for (std::multimap <unsigned int, Budget*>::iterator tmp = pp.first; tmp != pp.second; tmp++) {
            std::string type =  (*tmp).second->getType();
            if ((*tmp).second->getType() == types[0] && contract == 0) {
                ptr = (*tmp).second;
                return true;
            }
            else if ((*tmp).second->getType() == types[1] && contract == ((Contract*)tmp->second)->getContractNum()) {
                ptr = (*tmp).second; 
                return true;
            }
        }
        ptr = (pp.first != pp.second) ? (*(pp.first)).second : nullptr;
        return false;
    }

    int Table::ddelete(unsigned int privat,unsigned int contract) {
        Budget* ptr;
        if(!find(ptr, privat, contract)) return 0;
        else {
            std::pair <std::multimap <unsigned int, Budget*>::iterator, std::multimap <unsigned int, Budget*>::iterator> pp;
            pp = table.equal_range(privat);
            for (std::multimap <unsigned int, Budget*>::iterator tmp = pp.first; tmp != pp.second; tmp++) {
                if ((*tmp).second == ptr) {
                    table.erase(tmp);
                    break; 
                }
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
            auto pp = table.equal_range(num);
            for (std::multimap <unsigned int, taxes::Budget*>::iterator tmp = pp.first; tmp != pp.second; tmp++) {
                for (std::list<Payment>::iterator tmp1 = tmp->second->getIt().first; tmp1 != tmp->second->getIt().second; tmp1++) {
                    tax += tmp1->getSum()*0.13;
                }
            }
        }
        return tax;
    }

    int Table::add(Budget* b, unsigned int num) {
            unsigned int contract = (b->getType() == types[1]) ? ((Contract*)b)->getContractNum() : 0;
            int check = (b->getType() == types[1]) ? 1 : 0;
            taxes::Budget* ptr = nullptr;
            if (!collisioncheck(*this, ptr, num, contract, check)) return 1;
            table.insert(std::pair<unsigned int, Budget*>(num, b));
            return 0;
        }

    std::stringstream& Table::show(std::stringstream& ss) {
        ss << "\n" << "Table: " << std::endl << "------------------------------------------------------------" << std::endl;
        for (std::multimap <unsigned int, Budget*>::iterator it = table.begin(); it != table.end(); ++it) {
            ss << "Private number: " << (*it).first << std::endl << "Other information: " << std::endl << *((*it).second) << 
            "-------------------------------------------------------------" << std::endl;
        }
        return ss;
    }
}


