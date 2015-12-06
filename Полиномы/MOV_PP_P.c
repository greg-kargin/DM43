// ОСТАТОК ОТ ДЕЛЕНИЯ МНОГОЧЛЕНА НА МНОГОЧЛЕН
// Подключаемые модули:
// 1. DIV_PP_P -- частное от деления
// 2. SUB_PP_P -- вычитание многочленов
// 3. MUL_PP_P -- перемножение многочленов

#include "../build/main.h"

struct POLYNOMIAL MOV_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B)
{
  return (SUB_PP_P(A, MUL_PP_P(B, DIV_PP_P(A, B))));
}
