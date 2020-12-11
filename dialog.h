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

const int AMOUNT = 7;
const char* menu[7] = {"0. Quit", "1. Add element", "2. Find the element", "3. Delete the element", "4. Show table", "5. Count taxes", "6. Correct record"};
int (*fptr[])(taxes::Table&) = {nullptr, add_m, find_m, delete_m, show_m, counttaxes_m, correct_m};


#endif