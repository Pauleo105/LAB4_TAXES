#ifndef _TAX_H_
#define _TAX_H_
#include <iostream>
#include <string>
#include <iomanip>
#include <list>
#include <map>

namespace taxes {
    class Payment {
        private:
            std::tm date;
            std::string type;
            unsigned int summ;
        public:
            Payment():type("Salary"), summ(10000) {date.tm_mday = 1;date.tm_mon = 0;date.tm_year = 120;};
            Payment(int, int, std::string ttype = "Salary", unsigned int sum = 10000);
            Payment(std::string ttype, unsigned int sum = 10000);
            Payment(unsigned int sum);

            void setDate(int, int);
            void setType(std::string str) {type = str;};
            void setSumm(unsigned int sum) {summ = sum;};

            std::string getType() {return type;};
            unsigned int getSum() {return summ;};
            friend std::ostream& operator <<(std::ostream&, const Payment&);
    };

    class Budget {
        private:
            std::string sorname;
            std::string name;
            std::string lastname;
            std::string workplace;
            std::string post;
            std::list<Payment> ptr;
        protected:
            virtual std::ostream& print(std::ostream&) const;
        public:
            Budget(std::string sor = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", std::string wor = "MEPHI", std::string pos = "Rector"): 
                sorname(sor), name(nam), lastname(las), workplace(wor), post(pos) {ptr.resize(1);}
            Budget(int d, int m, std::string pay, unsigned int am): sorname("Ivanov"), name("Ivan"), lastname("Ivanovich"), workplace("MEPHI"), post("Rector") 
                {ptr.resize(1, (d, m, pay, am));}
            Budget(int d, int m, std::string pay, unsigned int am, std::string sor, std::string nam, std::string las, std::string wor, std::string pos): 
                sorname(sor), name(nam), lastname(las), workplace("MEPHI"), post("Rector") {ptr.resize(1, (d, m, pay, am));}
            //место для ваших конструкторов
            void setName(std::string str) {name = str;};
            void setSorname(std::string str) {sorname = str;};
            void setLastname(std::string str) {lastname = str;};
            void setWorkplace(std::string str) {workplace = str;};
            void setPost(std::string str) {post = str;};
            //
            std::pair<std::list<Payment>::iterator, std::list<Payment>::iterator> getIt();
            //
            void getInfo() {std::cout << *this;};
            virtual std::string getType() const {return "Budget";};
            unsigned int getGain() const;
            std::string getName() const {return sorname+' '+name[0]+'.'+lastname[0]+'.';};
            // сомнительная часть
            std::string getOnlyName() const {return name;};
            std::string getOnlySorname() const {return sorname;};
            std::string getOnlyLastame() const {return lastname;};
            //
            std::string getWork() const {return workplace;};
            void addPayment();

            friend std::ostream& operator <<(std::ostream&, const Budget&);
    };

    class Contract: public Budget{
        private:
            long contractnum;
        protected:
            std::ostream& print(std::ostream&) const override;
        public:
            Contract(): Budget(), contractnum(100) {};
            Contract(unsigned int num): Budget(), contractnum(num) {};
            Contract(unsigned int num, int d, int m, std::string pay, unsigned int am, std::string sor = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", 
                std::string wor = "MEPHI", std::string pos = "Rector"): Budget(d, m, pay, am, sor, nam, las, wor, pos), contractnum(num) {};
            Contract(unsigned int num, std::string sor = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", std::string wor = "MEPHI", std::string pos = "Rector"): Budget(sor, nam, las, wor, pos), contractnum(num) {};
            void setNum(long n) {contractnum = n;};
            unsigned int getContractNum() const {return contractnum;};
            std::string getType() const override {return "Contract";};
            friend std::ostream& operator <<(std::ostream&, const Contract&);
    };

    class Table {
        private:
            std::multimap <unsigned int, Budget*> table;
        public:
            void add(Budget*, unsigned int);
            int find(Budget*&, unsigned int, unsigned int);
            int ddelete(unsigned int,unsigned int);
            void show();
            double counttax(unsigned int);
    };
}
int choise(const char* menu[]);
int add_m(taxes::Table&);
int find_m(taxes::Table&);
int delete_m(taxes::Table&);
int show_m(taxes::Table&);
int counttaxes_m(taxes::Table&);

int collisioncheck(taxes::Table&, taxes::Budget*&, unsigned int&, unsigned int&, int&);
int getcontr();
std::string getstring(const std::string);

template <class T>
T getNum(T& a) {
        std::cin >> a;
        if (!std::cin.good()) return 1;
        return 2;
    };

#endif