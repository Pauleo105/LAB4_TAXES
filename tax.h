#ifndef _TAX_H_
#define _TAX_H_
#include <iostream>
#include <string>

struct date{
    private:
        short int dd;
        short int mm;
        short int yy;
    public:
        date(): dd(1), mm(1), yy(1990) {};
        date(int d, int m, int y): dd(d), mm(m), yy(y) {};
        void setDate();
        friend std::ostream& operator <<(std::ostream& c, const date& d) {c << d.dd << '.' << d.mm << '.' << d.yy; return c;};
};

namespace taxes {
    class Payment {
        private:
            date Date;
            std::string type;
            unsigned int summ;
        public:
            Payment* next;

    };

    class Budget {
        private:
            std::string fullname;
            std::string workplace;
            std::string post;
            Payment* ptr;
        protected:
            virtual std::ostream& print(std::ostream&) const;
        public:
            void getInfo();
            std::string getType(); //contract, budget, mixed
            unsigned int getGain() const;
            std::string getName() const;
            std::string getWork() const;

            virtual void addPayment(int n = 0);

            friend std::ostream& operator <<(std::ostream&, const Budget&);
    };

    class Contract: public Budget{
        private:
            long contractnum;
        protected:
            virtual std::ostream& print(std::ostream&) const;
        public:
            unsigned int getContractNum() const;

            virtual void addPayment(int n = 0);

    };

    class Table {
        private:
            long* personal;
            Budget** man;
        public:
            void add() const;
            Budget& find(int, int) const;
            void del(int, int);
            void show();
    };
}

#endif