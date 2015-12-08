#ifndef NATURAL_H
#define NATURAL_H

int menuItemNatural();
int menuNatural(struct NATURAL* nats);
struct NATURAL ADD_1N_N(struct NATURAL A);
struct NATURAL ADD_NN_N(struct NATURAL A, struct NATURAL B);
int COM_NN_D(struct NATURAL A, struct NATURAL B);
struct NATURAL DIV_NN_Dk(struct NATURAL A, struct NATURAL B);
struct NATURAL DIV_NN_N(struct NATURAL A, struct NATURAL B);
struct NATURAL GCF_NN_N(struct NATURAL A, struct NATURAL B);
struct NATURAL LCM_NN_N(struct NATURAL A, struct NATURAL B);
struct NATURAL MOD_NN_N(struct NATURAL A, struct NATURAL B);
struct NATURAL MUL_ND_N(struct NATURAL A, int k);
struct NATURAL MUL_Nk_N(struct NATURAL A, int k);
struct NATURAL MUL_NN_N(struct NATURAL A, struct NATURAL B);
int NZER_N_B(struct NATURAL A);
struct NATURAL SUB_NDN_N(struct NATURAL A, struct NATURAL B, int k);
struct NATURAL SUB_NN_N(struct NATURAL A, struct NATURAL B);
int output_N(struct NATURAL A);

#endif // NATURAL_H

