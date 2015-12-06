// Подгружаемые модули:
//POZ_Z_D
//ABS_Z_N
//COM_NN_D
//ADD_NN_N
//SUB_NN_N
//MUL_Z - _Z"

// Выполняет сложение целых чисел
// Мезенцев, Цветков - 4306
#include "../build/main.h"

struct INTEGER ADD_ZZ_Z(struct INTEGER summand1, struct INTEGER summand2)  // result = summand1 + summand2
  {
  struct INTEGER result;
  /* Проверить числа на равенство */
  if (COM_NN_D(summand1.natural_part, summand2.natural_part) == 0)
    {
    /* Числа равны по модулю */
    if (POZ_Z_D(summand1) == POZ_Z_D(summand2))
      /* знаки одинаковы */
      {
      result.natural_part = ADD_NN_N(summand1.natural_part, summand2.natural_part);
      result.sign = summand1.sign;
      }
    else
      {
      /* знаки разные */
      result.natural_part.index = 0;
      result.natural_part.number = (int*)malloc( sizeof(int) );
      result.natural_part.number[0] = 0;
      result.sign = 0;
      }
    }
  else
    {
    /* Числа не равны */
    if (POZ_Z_D(summand1) == POZ_Z_D(summand2))
      {
      /* Знаки совпадают */
      result.natural_part = ADD_NN_N(summand1.natural_part, summand2.natural_part);
      result.sign = POZ_Z_D(summand1);
      }
    else
      {
      /* Знаки разные */
      result.natural_part = SUB_NN_N(summand1.natural_part, summand2.natural_part);
      result.sign = POZ_Z_D(summand1);
      }
    }
  return result;
  }
