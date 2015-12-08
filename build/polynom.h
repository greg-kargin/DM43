#ifndef POLYNOM_H
#define POLYNOM_H
#include "../build/main.h"

int menuItemPolynom();
int menuPolynomial(struct POLYNOMIAL* pols);
struct POLYNOMIAL ADD_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
int DEG_P_N(struct POLYNOMIAL A);
struct POLYNOMIAL DER_P_P(struct POLYNOMIAL A);
struct POLYNOMIAL DIV_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
struct POLYNOMIAL FAC_P_PQ(struct POLYNOMIAL A);
struct POLYNOMIAL GCF_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
struct RATIONAL LED_P_Z(struct POLYNOMIAL A);
struct POLYNOMIAL MOV_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
struct POLYNOMIAL MUL_P_Q(struct POLYNOMIAL A, struct RATIONAL B);
struct POLYNOMIAL MUL_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
struct POLYNOMIAL MUL_Pxk_P(struct POLYNOMIAL A, int k);
struct POLYNOMIAL NMR_P_P(struct POLYNOMIAL A);
struct POLYNOMIAL SUB_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
int output_P(struct POLYNOMIAL A);
#endif // POLYNOM_H

