// Подгружаемые модули:
//POZ_Z_D
//ABS_Z_N
//COM_NN_D
//ADD_NN_N
//SUB_NN_N
//MUL_Z - _Z"

// Выполняет вычитание целых чисел
// Станевич, Денискова - 4306
#include "../build/main.h"

struct INTEGER SUB_ZZ_Z(struct INTEGER minuend, struct INTEGER subtrahend)  // result = minuend - subtrahend
  {
  struct INTEGER result;
  /* Проверить числа на равенство */
  if (!COM_NN_D(minuend.natural_part, subtrahend.natural_part))
    {
    /* Числа равны по модулю */
    if (POZ_Z_D(minuend) == POZ_Z_D(subtrahend))
      /* знаки одинаковы */
      {
      result.natural_part.index = 0;
      result.natural_part.number = (int*)malloc( sizeof(int) );
      result.natural_part.number[0] = 0;
      result.sign = 0;
      }
    else
      {
      /* знаки разные */
      result.natural_part = ADD_NN_N(minuend.natural_part, subtrahend.natural_part);
      result.sign = minuend.sign;
      }
    }
  else
    {
    /* Числа не равны */
    if (POZ_Z_D(minuend) == POZ_Z_D(subtrahend))
      {
      /* Знаки совпадают */
      result.natural_part = SUB_NN_N(minuend.natural_part, subtrahend.natural_part);
      result.sign = POZ_Z_D(minuend);
      }
    else
      {
      /* Знаки разные */
      result.natural_part = ADD_NN_N(minuend.natural_part, subtrahend.natural_part);
      result.sign = POZ_Z_D(minuend);
      }
    }

  return result;
  }
