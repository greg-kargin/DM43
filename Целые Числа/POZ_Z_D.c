#include "../build/main.h"
//Определение положительности числа (1 - положительное, 0 — равное нулю, 2 - отрицательное)
int POZ_Z_D(struct INTEGER number)
{
  if(!number.natural_part.index)
    return 0;
  return (number.sign+1);
}
