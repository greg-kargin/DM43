// ОСТАТОК ОТ ДЕЛЕНИЯ МНОГОЧЛЕНА НА МНОГОЧЛЕН
// Подключаемые модули:
// 1. DIV_PP_P -- частное от деления
// 2. SUB_PP_P -- вычитание многочленов
// 3. MUL_PP_P -- перемножение многочленов

#include "DIV_PP_P.c"
#include "SUB_PP_P.c"
#include "MUL_PP_P.c"

POLYNOMIAL MOV_PP_P(POLYNOMINAL *A, POLYNOMINAL *B)
{
  return(SUB_PP_P(A, MUL_PP_P(B, DIV_PP_P(A, B))));
}
