//Подгружаемые модули:
//    ADD_ZZ_Z.c
//    MUL_P_Q.c
//    MUL_Pxk_P.c
//Прототип struct POLYNOMIAL* MUL_PP_P(struct POLYNOMIAL*, struct POLYNOMIAL*), где
//  1-й параметр - указатель на структуру первого многочлена
//  2-й параметр - указатель на структуру второго многочлена
//Функция возвращает указатель на стуктуру многочлена, полученного в результате умножения
//Веретенников, Табаков

#include "../build/main.h"

struct POLYNOMIAL MUL_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B)
{
  struct POLYNOMIAL C=A;
  int i;

  /*C.degree = A.degree + B.degree;                           //Старшая степень многочлена, полученного в результате умножения
  C.factors = (struct RATIONAL*)malloc(C.degree*sizeof(struct RATIONAL*));  //Выделение памяти для массива коэффициентов многочлена, 
                                                              //полученного в результате умножения
  //Обнуление коэффициентов
  for (i = 0; i < C.degree + 1; i++)
    C.factors[i].numerator[0] = 0;
  //Умножение первого многочлена на каждый член второго многочлена
  for (i = 0; i < B->degree + 1; i++)
    C.factors = ADD_ZZ_Z(C.factors, MUL_P_Q(MUL_Pxk_P(A->factors, i), B->factors[i]));*/
  return C; //Возвращает указатель на структуру многочлена, полученного в результате умножения
}
