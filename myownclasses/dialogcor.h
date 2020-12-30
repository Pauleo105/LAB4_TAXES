#ifndef _DIALOGCOR_H_
#define _DIALOGCOR_H_
#include "tax.h"
#include "supportfunc.h"

void showsub(taxes::Budget&);
int choise_s(const char*, taxes::Budget&);
int surname_s(taxes::Budget&);
int name_s(taxes::Budget&);
int lastname_s(taxes::Budget&);
int work_s(taxes::Budget&);
int post_s(taxes::Budget&); 
int payment_s(taxes::Budget&);
int contract_s(taxes::Budget&);

extern const char* submenu[8];
extern int (*fptrsub[])(taxes::Budget&);

#endif