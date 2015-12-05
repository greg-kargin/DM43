#ifndef NATURAL_H
#define NATURAL_H
void menuNatural();
struct NATURAL ADD_1N_N(struct NATURAL);
struct NATURAL ADD_NN_N(struct NATURAL a, struct NATURAL b);
int COM_NN_D(struct NATURAL one, struct NATURAL two);
struct NATURAL DIV_NN_Dk(struct NATURAL A, struct NATURAL B);
struct NATURAL DIV_NN_N(struct NATURAL a, struct NATURAL b);
struct NATURAL GCF_NN_N(struct NATURAL A, struct NATURAL B);
struct NATURAL LCM_NN_N(struct NATURAL a, struct NATURAL b);
struct NATURAL MOD_NN_N(struct NATURAL delimoe, struct NATURAL delitel);
struct NATURAL MUL_ND_N(struct NATURAL a, int k);
struct NATURAL MUL_Nk_N(struct NATURAL A, int k);
struct NATURAL MUL_NN_N(struct NATURAL E, struct NATURAL B);
int NZER_N_B(struct NATURAL num);
struct NATURAL SUB_NDN_N(struct NATURAL a, struct NATURAL b, int c);
struct NATURAL SUB_NN_N(struct NATURAL a, struct NATURAL b);
int output_N(struct NATURAL a);
#endif // NATURAL_H

