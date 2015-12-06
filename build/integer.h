#ifndef INTEGER_H
#define INTEGER_H

void menuInteger();
int ABS_Z_N(struct INTEGER A);
struct INTEGER ADD_ZZ_Z(struct INTEGER summand1, struct INTEGER summand2);
struct INTEGER DIV_ZZ_Z(struct INTEGER num, struct NATURAL den);
struct INTEGER MOD_ZZ_Z(struct INTEGER a, struct NATURAL b);
struct INTEGER MUL_ZZ_Z(struct INTEGER factor1, struct INTEGER factor2);
int output_Z(struct INTEGER a);
int POZ_Z_D(struct INTEGER number);
struct INTEGER SUB_ZZ_Z(struct INTEGER summand1, struct INTEGER summand2);
struct INTEGER TRANS_N_Z(struct NATURAL A);
struct NATURAL TRANS_Z_N(struct INTEGER inp_num);
#endif // INTEGER_H

