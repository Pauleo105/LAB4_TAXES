/*!
\file
\brief Заголовочный файл с описанием классов

Данный файл содержит в себе определения основных классов, используемых в программе
*/
#ifndef _TAX_H_
#define _TAX_H_
#include <iostream>
#include <string>
#include <iomanip>
#include <list>
#include <map>
#include <sstream>

/*!
\brief Пространство имен, содержащее все классы для работы с налоговыми вычетами

Данное пространство имен содержит определения классов, функций-друзей классов и переменных, связанные с работой с налогами
*/
namespace taxes {
    /*!
    \brief Класс, содержащий в себе информацию о выплате

    Данный класс содержит в себе конструкторы и различные атрибуты, служащие для хранения информации о выплате, а также работе с ней.
    */
    class Payment {
        private:
            std::tm date; ///< Дата выплаты
            std::string type; ///< Тип выплаты
            unsigned int summ; ///< Сумма выплаты
        public:
            /**
             * @brief Стандартный конструктор
             * 
             */
            Payment():type("Salary"), summ(10000) {date.tm_mday = 1;date.tm_mon = 0;date.tm_year = 120;};
            /**
             * @brief Конструктор
             * 
             * @param dd День месяца
             * @param mm Номер месяца
             * @param ttype Тип выплаты
             * @param sum Размер выплаты
             */
            Payment(int, int, std::string ttype = "Salary", unsigned int sum = 10000);
            /**
             * @brief Конструктор
             * 
             * @param ttype Тип выплаты
             * @param sum Размер выплаты
             */
            Payment(std::string ttype, unsigned int sum = 10000);
            /**
             * @brief Конструктор
             * 
             * @param sum Размер выплаты
             */
            Payment(unsigned int sum);

            /*!
            Сеттер для установки даты выплаты
            \param dd День месяца
            \param mm Номер месяца
            */
            void setDate(int, int);
            /*!
            Сеттер для установки типа выплаты
            \param str Тип выплаты
            */
            void setType(std::string str) {type = str;};
            /*!
            Сеттер для установки суммы выплаты
            \param sum Сумма выплаты
            */
            void setSumm(unsigned int sum) {summ = sum;};

            /*!
            Геттер для получения типа выплаты
            \return Тип выплаты
            */
            std::string getType() {return type;};
            /*!
            Геттер для получения суммы выплаты
            \return Сумму выплаты
            */
            unsigned int getSum() {return summ;};
            /*!
            Геттер для получения даты выплаты
            \return Дату выплаты
            */
            std::string getDate() {std::stringstream c; c << std::put_time(&(date), "%d/%m/%Y"); return c.str();};
            /*!
            Вывод элемент класса "выплата" в поток вывода
            \param c Ссылка на поток вывода
            \param p Cсылка на выплату
            \return Ссылку на поток вывода
            */
            friend std::ostream& operator <<(std::ostream&, const Payment&);
    };

    /**
     * @brief  Базовый класс, содержащий в себе информацию о бюджетном работнике
     * 
     * @details Данный класс содержит в себе конструкторы и различные атрибуты, служащие для хранения информации о бюджетном работнике, а также работе с этой информации.
     */
    class Budget {
        private:
            std::string surname; ///< Фамилия работника
            std::string name;///< Имя работника
            std::string lastname;///< Отчество работника
            std::string workplace;///< Место работы
            std::string post;///< Должность
            std::list<Payment> ptr;///< Список выплат
        protected:
            /*!
            Вывод элемента в поток вывода
            \param c Ссылка на поток вывода
            \return Ссылку на поток вывода
            */
            virtual std::ostream& print(std::ostream&) const;
        public:
            /**
             * @brief Стандартный конструктор
             * 
             * @param sur Фамилия
             * @param nam Имя
             * @param las Отчество
             * @param wor Место работы
             * @param pos Должность
             */
            Budget(std::string sur = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", std::string wor = "MEPHI", std::string pos = "Rector"): 
                surname(sur), name(nam), lastname(las), workplace(wor), post(pos) {ptr.clear();}
            /**
             * @brief Конструктор
             * 
             * @param d День месяца
             * @param m Номер месяца
             * @param pay Тип выплаты
             * @param am Размер выплаты
             */
            Budget(int d, int m, std::string pay, unsigned int am): surname("Ivanov"), name("Ivan"), lastname("Ivanovich"), workplace("MEPHI"), post("Rector") 
                {Payment a(d, m, pay, am); ptr.resize(1, a);}
            /**
             * @brief Конструктор
             * 
             * @param d День месяца
             * @param m Номер месяца
             * @param pay Тип выплаты
             * @param am Размер выплаты
             * @param sur Фамилия
             * @param nam Имя
             * @param las Отчество
             * @param wor Место работы
             * @param pos Должность
             */
            Budget(int d, int m, std::string pay, unsigned int am, std::string sur, std::string nam, std::string las, std::string wor, std::string pos): 
                surname(sur), name(nam), lastname(las), workplace(wor), post(pos) {Payment a(d, m, pay, am); ptr.resize(1, a);}
            /*!
            Сеттер для установки имени
            \param str Имя
            */
            void setName(std::string str) {if (str.length() != 0) name = str;else throw std::runtime_error("Invalid input!");};
            /*!
            Сеттер для установки фамилии
            \param str Фамилия
            */
            void setSurname(std::string str) {if (str.length() != 0) surname = str;else throw std::runtime_error("Invalid input!");};
            /*!
            Сеттер для установки отчества
            \param str Отчество
            */
            void setLastname(std::string str) {if (str.length() != 0) lastname = str;else throw std::runtime_error("Invalid input!");};
            /*!
            Сеттер для установки места работы
            \param str Место работы
            */
            void setWorkplace(std::string str) {if (str.length() != 0) workplace = str;else throw std::runtime_error("Invalid input!");};
            /*!
            Сеттер для установки должности
            \param str Должность
            */
            void setPost(std::string str) {if (str.length() != 0) post = str;else throw std::runtime_error("Invalid input!");};
            /**
             * @brief Геттер для получения итератора
             * 
             * @return Итератор
             */
            std::pair<std::list<Payment>::iterator, std::list<Payment>::iterator> getIt();
            /**
             * @brief Вывод информации об элементе
             * 
             */
            void getInfo() {std::cout << *this;};
            /**
             * @brief Виртуальная функция, возвращает тип работника
             * 
             * @return Тип работника
             */
            virtual std::string getType() const;
            /**
             * @brief Возвращает заработок работника
             * \param typ Тип работника
             * @return Заработок работника 
             */
            unsigned int getGain(std::string) const;
            /**
             * @brief Возвращает ФИО работника
             * 
             * @return ФИО работника
             */
            std::string getName() const {return surname+' '+name[0]+'.'+lastname[0]+'.';};//getfullname
            /**
             * @brief Возвращает имя работника
             * 
             * @return Имя работника
             */
            std::string getOnlyName() const {return name;};//без only
            /**
             * @brief Возвращает фамилию работника
             * 
             * @return Фамилию работника
             */
            std::string getOnlySurname() const {return surname;};
            /**
             * @brief Возвращает отчество работника
             * 
             * @return Отчество работника
             */
            std::string getOnlyLastame() const {return lastname;};
            /**
             * @brief Возвращает место работы работника
             * 
             * @return Место работы работника
             */
            std::string getWork() const {return workplace;};//поменять на getworkplace
            /**
             * @brief Возвращает должность работника
             * 
             * @return Должность работника
             */
            std::string getPost() const {return post;};
            /**
             * @brief Проверяет, пуст ли список выплат
             * 
             * @return true, если список пуст
             * @return false, если список не пуст
             */
            bool isEmpty() const {return ptr.empty();};
            /**
             * @brief Добавляет выплату
             * 
             * @param p Элемент класса "выплата"
             */
            void addPayment(const Payment& p) {ptr.push_back(p);};

            /**
             * @brief Перегруженный оператор вывода в поток
             * 
             * \param c Ссылка на поток вывода
             * \param b Ссылка на объект класса "бюджетный работник"
             * @return Ссылку на поток вывода
             */
            friend std::ostream& operator <<(std::ostream&, const Budget&);
    };

    /**
     * @brief  Производный класс, содержащий в себе информацию о контрактном работнике
     * 
     * @details Данный класс содержит в себе конструкторы и различные атрибуты, служащие для хранения информации о контрактном работнике, а также работе с этой информации.
     */
    class Contract: public Budget{
        private:
            long contractnum;///< Номер контракта
        protected:
            /*!
            Вывод элемента в поток вывода
            \param c Ссылка на поток вывода
            \return Ссылку на поток вывода
            */
            std::ostream& print(std::ostream&) const override;
        public:
            /**
             * @brief Стандартный конструктор
             * 
             */
            Contract(): Budget(), contractnum(100) {};
            /**
             * @brief Конструктор
             * 
             * @param num Личный номер
             * @param d День месяца
             * @param m Номер месяца
             * @param pay Тип выплаты
             * @param am Размер выплаты
             * @param sur Фамилия работника
             * @param nam Имя работника
             * @param las Отчество работника
             * @param wor Место работы
             * @param pos Должность
             */
            Contract(unsigned int num, int d, int m, std::string pay, unsigned int am, std::string sur = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", 
                std::string wor = "MEPHI", std::string pos = "Rector"): contractnum(num), Budget(d, m, pay, am, sur, nam, las, wor, pos) {};
            /**
             * @brief Конструктор
             * 
             * @param num Личный номер
             * @param sur Фамилия работника
             * @param nam Имя работника
             * @param las Отчество работника
             * @param wor Место работы
             * @param pos Должность
             */
            Contract(unsigned int num, std::string sur = "Ivanov", std::string nam = "Ivan", std::string las = "Ivanovich", std::string wor = "MEPHI", std::string pos = "Rector"): Budget(sur, nam, las, wor, pos), contractnum(num) {};
            /**
             * @brief Сеттер для установки номера контракта
             * 
             * @param n Номер контракта
             */
            void setNum(long n) {contractnum = n;};
            /**
             * @brief Геттер для получения номера контракта
             * 
             * @return Номер контракта
             */
            unsigned int getContractNum() const {return contractnum;};
            /**
             * @brief Виртуальная функция, возвращает тип работника
             * 
             * @return Тип работника
             */
            std::string getType() const override;
            /**
             * @brief Перегруженный оператор вывода в поток
             * 
             * \param c Ссылка на поток вывода
             * \param p Ссылка на объект класса "контрактный работник"
             * @return Ссылку на поток вывода
             */
            friend std::ostream& operator <<(std::ostream&, const Contract&);
    };

    /**
     * @brief  Класс, содержащий в себе информацию о таблице
     * 
     * @details Данный класс содержит в себе конструкторы и различные атрибуты, служащие для хранения информации о работниках в таблице, а также работе с самой таблицей.
     */
    class Table {
        private:
            std::multimap <unsigned int, Budget*> table;///< контейнерный тип для хранения пар личный номер - ссылка на работника
        public:
            /**
             * @brief Деструктор
             * 
             */
            ~Table();
            /**
             * @brief Добавляет элемент в таблицу
             * 
             * @param b Указатель на базовый класс "бюджетный работник"
             * @param num Личный номер
             * @return 0, если элемент успешно добавлен в таблицу
             * @return 1, если во время добавления произошла ошибка
             */
            int add(Budget*, unsigned int);
            /**
             * @brief Находит работника по личному номеру и номеру контракта
             * 
             * @param ptr Ссылка на указатель на базовый класс "бюджетный работник"
             * @param privat Личный номер работника 
             * @param contract Номер контракта работника
             * @return true, если элемент найден
             * @return false, если элемент не найден
             */
            bool find(Budget*&, unsigned int, unsigned int);
            /**
             * @brief Удаляет работника из таблицы по личному номеру и номеру контракта
             * 
             * @param privat Личный номер работника 
             * @param contract Номер контракта работника
             * @return 0, если элемент не найден
             * @return 1, если элемент успешно удален
             */
            int ddelete(unsigned int,unsigned int);
            /**
             * @brief Вывод таблицы в поток
             * @param ss Ссылка на поток ввода
             * @return Ссылку на поток строки
             */
            std::stringstream& show(std::stringstream&);
            /**
             * @brief Вычисляет размер налога на все выплаты данного работника
             * 
             * @param num Личный номер работника 
             * @return Налог на выплаты (13% от всех выплат) 
             */
            double counttax(unsigned int);
    };

    extern const char* types[2];///< Типы работников
}

#endif