#ifndef _SUPPORTFUNC_H_
#define _SUPPORTFUNC_H_
#include "tax.h"

int getNum(unsigned int&);
int getNum(int&);
int collisioncheck(taxes::Table&, taxes::Budget*&, unsigned int&, unsigned int&, int&);
int getcontr();
std::string getstring(const std::string);
#endif