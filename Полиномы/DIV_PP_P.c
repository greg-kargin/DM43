// Частное от деления многочлена на многочлен
// Прототип - struct POLYNOMIAL DIV_PP_P (struct POLYNOMIAL, struct POLYNOMIAL)
// Произвоидтся деление Px на Mx
// Qx - Частное от деления Px на Mx
// Rx - Остаток от деления

// Подключаемые модули:
// DEG_P_N - Степень многочлена
// DIV_QQ_Q - Деление дробей (делитель отличен от нуля)
// ADD_PP_P - Сложение многочленов
// SUB_PP_P - Вычитание многочленов
// MUL_PP_P - Умножение многочленов

// гр. 4305, Аллаяров, Хабиров

#include "DEG_P_N.c"
#include "DIV_QQ_Q .c"
#include "ADD_PP_P.c"
#include "SUB_PP_P.c"
#include "MUL_PP_P.c"

struct POLYNOMIAL DIV_PP_P(struct POLYNOMIAL Px, struct POLYNOMIAL Mx)
{
  struct POLYNOMIAL Qx;
  Qx.factors = (RATIONAL*)malloc(sizeof(RATIONAL));
  struct POLYNOMIAL Rx = Px;
  struct POLYNOMIAL Tx;
  Tx.factors = (RATIONAL*)malloc(sizeof(RATIONAL));
  while(DEG_P_N (Rx) >= DEG_P_N (Mx))
  {
	  Tx.degree = (DEG_P_N (Rx) - DEG_P_N (Mx));
	  Tx.factors[degree] = DIV_QQ_Q(Rx.factors[degree], Mx.factors[degree]);
	  Qx = ADD_PP_P(Qx, Tx);
	  Rx = SUB_PP_P(Rx, MUL_PP_P(Tx, Mx);
  }
  Tx.factors = NULL;
  return Qx;
}	
