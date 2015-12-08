/*Подключаемые модули:
MUL_ND_N - умножение числа на цифру
MUL_Nk_N - умножение числа на 10^k
struct NATURAL MUL_NN_N(struct NATURAL,struct NATURAL) - прототип
struct NATURAL - первое натуральное число
struct NATURAL - второе натуральное число
Выполнили: Кановский, Веденин 4306*/
#include "../build/main.h"

struct NATURAL MUL_NN_N(struct NATURAL A, struct NATURAL B)
  {
  // Инициализация числа
  struct NATURAL result;
  result.index = ( (A.index * B.index) / 10 > 0) ? (A.index + B.index) : (A.index + B.index - 1);
  result.number = (int*)malloc(result.index*sizeof(int));
  int i;
  for (i = 0; i < result.index; ++i)
    result.number[i] = 0;
  
  for (i = 0; i < B.index; ++i)
    result = ADD_NN_N(result, MUL_ND_N(MUL_Nk_N(A, i), B.number[i]) );
  return result;
  }  

