#ifndef _DIALOG_H_
#define _DIALOG_H_
#include "tax.h"

int choise(const char* menu[]);
int add_m(taxes::Table&);
int find_m(taxes::Table&);
int delete_m(taxes::Table&);
int show_m(taxes::Table&);
int counttaxes_m(taxes::Table&);
int correct_m(taxes::Table&);

extern const int AMOUNT;
extern const char* menu[7];
extern int (*fptr[])(taxes::Table&);


#endif