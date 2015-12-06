#ifndef POLYNOM_H
#define POLYNOM_H

int menuPolynom();
struct POLYNOMIAL ADD_PP_P(struct POLYNOMIAL first, struct POLYNOMIAL second);
int DEG_P_N(struct POLYNOMIAL st);
struct POLYNOMIAL DER_P_P(struct POLYNOMIAL a);
struct POLYNOMIAL DIV_PP_P(struct POLYNOMIAL a, struct POLYNOMIAL b);
struct POLYNOMIAL FAC_P_PQ(struct POLYNOMIAL polinom);
struct POLYNOMIAL GCF_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
struct RATIONAL LED_P_Z(struct POLYNOMIAL st);
struct POLYNOMIAL MOV_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
struct POLYNOMIAL MUL_P_Q(struct POLYNOMIAL a, struct RATIONAL b);
struct POLYNOMIAL MUL_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B);
struct POLYNOMIAL MUL_Pxk_P(struct POLYNOMIAL polynom, int k);
struct POLYNOMIAL NMR_P_P(struct POLYNOMIAL a);
struct POLYNOMIAL SUB_PP_P(struct POLYNOMIAL first, struct POLYNOMIAL second);
int output_P(struct POLYNOMIAL pol);
#endif // POLYNOM_H

