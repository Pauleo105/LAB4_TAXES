#ifndef _TAX_H_
#define _TAX_H_
#include <iostream>
#include <string>
#include <iomanip>
#include <list>
#include <map>
#include <sstream>

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
            std::string surname;
            std::string name;
            std::string lastname;
            std::string workplace;
            std::string post;
            std::list<Payment> ptr;
        protected:
            virtual std::ostream& print(std::ostream&) const;
        public:
            Budget(std::string sur = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", std::string wor = "MEPHI", std::string pos = "Rector"): 
                surname(sur), name(nam), lastname(las), workplace(wor), post(pos) {ptr.clear();}
            Budget(int d, int m, std::string pay, unsigned int am): surname("Ivanov"), name("Ivan"), lastname("Ivanovich"), workplace("MEPHI"), post("Rector") 
                {ptr.resize(1, (d, m, pay, am));}
            Budget(int d, int m, std::string pay, unsigned int am, std::string sur, std::string nam, std::string las, std::string wor, std::string pos): 
                surname(sur), name(nam), lastname(las), workplace(wor), post(pos) {ptr.resize(1, (d, m, pay, am));}
            void setName(std::string str) {if (str.length() != 0) name = str;else throw std::runtime_error("Invalid input!");};
            void setSurname(std::string str) {if (str.length() != 0) surname = str;else throw std::runtime_error("Invalid input!");};
            void setLastname(std::string str) {if (str.length() != 0) lastname = str;else throw std::runtime_error("Invalid input!");};
            void setWorkplace(std::string str) {if (str.length() != 0) workplace = str;else throw std::runtime_error("Invalid input!");};
            void setPost(std::string str) {if (str.length() != 0) post = str;else throw std::runtime_error("Invalid input!");};
            std::pair<std::list<Payment>::iterator, std::list<Payment>::iterator> getIt();
            void getInfo() {std::cout << *this;};
            virtual std::string getType() const;
            unsigned int getGain() const;
            std::string getName() const {return surname+' '+name[0]+'.'+lastname[0]+'.';};
            std::string getOnlyName() const {return name;};
            std::string getOnlySurname() const {return surname;};
            std::string getOnlyLastame() const {return lastname;};
            std::string getWork() const {return workplace;};
            void addPayment(const Payment& p) {ptr.push_back(p);};

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
            Contract(unsigned int num, int d, int m, std::string pay, unsigned int am, std::string sur = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", 
                std::string wor = "MEPHI", std::string pos = "Rector"): contractnum(num), Budget(d, m, pay, am, sur, nam, las, wor, pos) {};
            Contract(unsigned int num, std::string sur = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", std::string wor = "MEPHI", std::string pos = "Rector"): Budget(sur, nam, las, wor, pos), contractnum(num) {};
            void setNum(long n) {contractnum = n;};
            unsigned int getContractNum() const {return contractnum;};
            std::string getType() const override;
            friend std::ostream& operator <<(std::ostream&, const Contract&);
    };

    class Table {
        private:
            std::multimap <unsigned int, Budget*> table;
        public:
            ~Table();
            int add(Budget*, unsigned int);
            bool find(Budget*&, unsigned int, unsigned int);
            int ddelete(unsigned int,unsigned int);
            std::stringstream& show(std::stringstream&);
            double counttax(unsigned int);
    };
}

#endif