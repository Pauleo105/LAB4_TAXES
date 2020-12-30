#ifndef _MYLIST_H_
#define _MYLIST_H_

#include <iterator>

namespace mine {

    template <class T>
    class listIt;

    template <class T>
    struct ElemPtr {
        T value;
        ElemPtr* next;
        ElemPtr* prev;
        ElemPtr(): next(nullptr), prev(nullptr) {};
        ElemPtr(T info): next(nullptr), prev(nullptr) {value = info;};
        ElemPtr(T info, ElemPtr* p, ElemPtr* n): next(n), prev(p) {value = info;};
    };

        template <class T>
        std::ostream& operator <<(std::ostream&, const ElemPtr<T>&);

    template <class T>
    class list {
            friend class listIt<T>;
        private:
            ElemPtr<T>* first;
            ElemPtr<T>* last;
            int amount;
        public:
            list(): first(nullptr), last(nullptr), amount(0) {};
            list(T info): amount(1) {first = new ElemPtr<T>(info); last = first;};
            list(const list&);
            ~list();
            void addFront(const T&);
            void addBack(const T&);
            void delElem(ElemPtr<T>*);
            ElemPtr<T>* getHead() const{return first;};//а нужны ли эти ребятки
            ElemPtr<T>* getTail() const{return last;};//
            int getAmount() const {return amount;};
            bool isEmpty() const {return (first == nullptr) ? true:false;};
            friend std::ostream& operator <<(std::ostream&, const list<T>&);
            typedef listIt<T> Iterator;
            Iterator begin() const;
            Iterator end() const;
    };

    template <class T>
    std::ostream& operator <<(std::ostream& c, const ElemPtr<T>& b) {
        c << b.value;
        return c;
    }

    template <class T>
    std::ostream& operator <<(std::ostream& c, list<T>& b) {
        if (b.isEmpty()) c << "This list is empty!";
        else {
            c << "Amount: " << b.getAmount() << "; List: " << " null >>> ";
            for (ElemPtr<T>* ptr = b.getHead(); ptr != nullptr; ptr = ptr->next) {
                c << *ptr << " >>> ";
            }
            c << "null";
        }
        return c;
    }

    template <class T>
    list<T>::~list() {
        ElemPtr<T>* ptr = first, *ftp;
        if (ptr) { 
            while (ptr != nullptr) {
                ftp = ptr;
                ptr = ptr->next;
                delete ftp; 
            }
        }
    }

    template <class T>
    list<T>::list(const list& l) {
        this->first = l.first;
        this->last = l.last;
        this->amount = l.amount;
        ElemPtr<T>* ptr = first, *temp;
        while (ptr != last->next) {
            temp = ptr;
            ptr = ptr->next;
            this->addBack(temp);
        }
    }

    template <class T>
    void list<T>::addFront(const T& info) {
        if (!first) {
            ElemPtr<T>* ptr = new ElemPtr<T>(info, nullptr, nullptr);
            first = ptr;
            last = ptr;
        }
        else {
            ElemPtr<T>* ptr = new ElemPtr<T>(info, nullptr, first);
            first->prev = ptr;
            first = ptr;
        }
        amount++;
    }

    template <class T>
    void list<T>::addBack(const T& info) {
        if (!first) {
            ElemPtr<T>* ptr = new ElemPtr<T>(info, nullptr, nullptr);
            first = ptr;
            last = ptr;
        }
        else {
            ElemPtr<T>* ptr = new ElemPtr<T>(info, last, nullptr);
            last->next = ptr;
            last = ptr;
        }
        amount++;
    }

    template <class T>
    void list<T>::delElem(ElemPtr<T>* ptr) {
        if (!ptr) return;
        else {
            if (ptr->prev == nullptr) {
                first = ptr->next;
                first->prev = nullptr;
            }
            else if (ptr->next = nullptr) {
                last = ptr->prev;
                last->next = nullptr;
            }
            else {
                (ptr->prev)->next = ptr->next;
                (ptr->next)->prev = ptr->prev;
            }
            delete ptr;
            amount--;
        }
    }

    template <class T>
    listIt<T> list<T>::begin() const{
        listIt<T> a(this->getHead());
        return a;
    }

    template <class T>
    listIt<T> list<T>::end() const{
        listIt<T> a(this->getTail());
        return a;
    }

    template <class T>
    class listIt{
        private:
            ElemPtr<T>* cur;
        public:
            listIt(): cur(nullptr) {};
            listIt(ElemPtr<T>* a): cur(a) {};
            int operator != (const listIt<T>&) const;
            int operator == (const listIt<T>&) const;
            ElemPtr<T>* operator ->();
            ElemPtr<T>& operator *();
            listIt<T>& operator++();
            listIt<T> operator++(int);
    };

    template <class T>
    int listIt<T>::operator !=(const listIt<T>& b) const{
        return cur != b.cur;
    }

    template <class T>
    int listIt<T>::operator ==(const listIt<T>& b) const{
        return cur == b.cur;
    }

    template <class T>
    ElemPtr<T>* listIt<T>::operator ->() {
        return cur;
    }

    template <class T>
    ElemPtr<T>& listIt<T>::operator *() {
        return *cur;
    }

    template <class T>
    listIt<T>& listIt<T>::operator ++() {
        cur = cur->next;
        return *this;
    }

    template <class T>
    listIt<T> listIt<T>::operator ++(int a) {
        listIt<T> temp(*this);
        cur = cur->next;
        return temp;
    }
}

#endif