// Подгружаемые модули:
//POZ_Z_D
//ABS_Z_N
//MUL_NN_N
//MUL_Z - _Z"

// Выполняет умножение целых чисел
// Станевич, Денискова - 4306
#include "ABS_Z_N.c"
#include "POZ_Z_D.c"
#include "MUL_NN_N.c"
#include "MUL_Z-_Z.c"

struct INTEGER MULL_ZZ_Z(struct INTEGER factor1, struct INTEGER factor2)  // result = factor1 * factor2
  {
  struct INTEGER result;
  result.sign = 0;
  result.natural_part = MUL_NN_N(ABS_Z_N(factor1), ABS_Z_N(factor2));
  if (POZ_Z_D(a) * POZ_Z_D(b) == 2)
    MUL_Z-_Z (result);

  return result;
  }
