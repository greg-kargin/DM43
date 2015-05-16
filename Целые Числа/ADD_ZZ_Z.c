// Подгружаемые модули:
//POZ_Z_D
//ABS_Z_N
//COM_NN_D
//ADD_NN_N
//SUB_NN_N
//MUL_Z - _Z"

// Выполняет сложение целых чисел
// Мезенцев, Цветков - 4306
#include "ABS_Z_N.c"
#include "POZ_Z_D.c"
#include "COM_NN_D.c"
#include "ADD_NN_N.c"
#include "SUB_NN_N.c"
#include "MUL_Z - _Z.c"

struct INTEGER SUB_ZZ_Z(struct INTEGER summand1, struct INTEGER summand2)  // result = summand1 + summand2
  {
  struct INTEGER result;
  /* Проверить числа на равенство */
  if (COM_NN_D(ABS_Z_N(summand1), ABS_Z_N(summand2)) == 0)
    {
    /* Числа равны по модулю */
    if (POZ_Z_D(summand1) == POZ_Z_D(summand2))
      /* знаки одинаковы */
      {
      result.natural_part = ADD_NN_N(ABS_Z_N(summand1), ABS_Z_N(summand2));
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
      result.natural_part = ADD_NN_N(ABS_Z_N(summand1), ABS_Z_N(summand2));
      result.sign = POZ_Z_D(summand1);
      }
    else
      {
      /* Знаки разные */
      result.natural_part = SUB_NN_N(ABS_Z_N(summand1), ABS_Z_N(summand2));
      result.sign = POZ_Z_D(summand1);
      }
    }

  return result;
  }
