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

struct INTEGER ADD_ZZ_Z(struct INTEGER A, struct INTEGER B)  // result = A + B
  {
  struct INTEGER result;
  /* Проверить числа на равенство */
  if (COM_NN_D(A.natural_part, B.natural_part) == 0)
    {
    /* Числа равны по модулю */
    if (POZ_Z_D(A) == POZ_Z_D(B))
      /* знаки одинаковы */
      {
      result.natural_part = ADD_NN_N(A.natural_part, B.natural_part);
      result.sign = A.sign;
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
    if (POZ_Z_D(A) == POZ_Z_D(B))
      {
      /* Знаки совпадают */
      result.natural_part = ADD_NN_N(A.natural_part, B.natural_part);
      result.sign = POZ_Z_D(A);
      }
    else
      {
      /* Знаки разные */
      result.natural_part = SUB_NN_N(A.natural_part, B.natural_part);
      result.sign = POZ_Z_D(A);
      }
    }
  return result;
  }
