#ifndef RATIONAL_H
#define RATIONAL_H

int menuRational();
struct RATIONAL ADD_QQ_Q(struct RATIONAL number1, struct RATIONAL number2);
struct RATIONAL DIV_QQ_Q(struct RATIONAL a, struct RATIONAL b);
int INT_Q_Z(struct RATIONAL a);
struct RATIONAL MUL_QQ_Q(struct RATIONAL a, struct RATIONAL b);
int output_Q(struct RATIONAL a);
struct RATIONAL RED_Q_Q(struct RATIONAL a);
struct RATIONAL SUB_QQ_Q(struct RATIONAL number1, struct RATIONAL number2);
struct INTEGER TRAN_Q_Z(struct RATIONAL b);
struct RATIONAL TRAN_Z_Q(struct INTEGER A);
#endif // RATIONAL_H