#ifndef RATIONAL_H
#define RATIONAL_H
#include "../build/main.h"

int menuItemRational();
int menuRational(struct RATIONAL* rats, struct INTEGER* ints);
struct RATIONAL ADD_QQ_Q(struct RATIONAL A, struct RATIONAL B);
struct RATIONAL DIV_QQ_Q(struct RATIONAL A, struct RATIONAL B);
int INT_Q_Z(struct RATIONAL A);
struct RATIONAL MUL_QQ_Q(struct RATIONAL A, struct RATIONAL B);
int output_Q(struct RATIONAL A);
struct RATIONAL RED_Q_Q(struct RATIONAL A);
struct RATIONAL SUB_QQ_Q(struct RATIONAL A, struct RATIONAL B);
struct INTEGER TRAN_Q_Z(struct RATIONAL B);
struct RATIONAL TRAN_Z_Q(struct INTEGER A);
#endif // RATIONAL_H