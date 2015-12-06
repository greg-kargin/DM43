#ifndef INPUTS_H
#define INPUTS_H

#include "main.h"
#include "stdio.h"
#include "stdlib.h"

struct NATURAL ENNAT();
struct INTEGER ENINT();
struct RATIONAL ENRAT();
struct POLYNOMIAL ENPOL();
char enterCharInterval(char first, char last, char* str);
int enterIntNumInterval(int first, int last);

#endif // INPUTS_H

