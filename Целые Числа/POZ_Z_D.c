#include "../build/main.h"
//Определение положительности числа (1 - положительное, 0 — равное нулю, 2 - отрицательное)
int POZ_Z_D(struct INTEGER A)
{
  if(!A.natural_part.index)
    return 0;
  return (A.sign+1);
}
