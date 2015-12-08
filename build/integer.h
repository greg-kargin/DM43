#ifndef INTEGER_H
#define INTEGER_H
#include "../build/main.h"

int menuItemInteger();
int menuInteger(struct INTEGER* ints, struct NATURAL* nats);
int ABS_Z_N(struct INTEGER A);
struct INTEGER ADD_ZZ_Z(struct INTEGER A, struct INTEGER B);
struct INTEGER DIV_ZZ_Z(struct INTEGER A, struct NATURAL B);
struct INTEGER MOD_ZZ_Z(struct INTEGER A, struct NATURAL B);
struct INTEGER MUL_ZZ_Z(struct INTEGER A, struct INTEGER B);
int output_Z(struct INTEGER A);
int POZ_Z_D(struct INTEGER A);
struct INTEGER SUB_ZZ_Z(struct INTEGER A, struct INTEGER B);
struct INTEGER TRANS_N_Z(struct NATURAL A);
struct NATURAL TRANS_Z_N(struct INTEGER A);
#endif // INTEGER_H

