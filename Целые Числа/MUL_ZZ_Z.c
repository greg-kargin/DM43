// Подгружаемые модули:
//POZ_Z_D
//ABS_Z_N
//MUL_NN_N
//MUL_Z - _Z"

// Выполняет умножение целых чисел
// Станевич, Денискова - 4306
#include "../build/main.h"

struct INTEGER MUL_ZZ_Z(struct INTEGER factor1, struct INTEGER factor2)  // result = factor1 * factor2
{
	struct INTEGER result;
	if(POZ_Z_D(factor1)==2 || POZ_Z_D(factor2)==2)
	result.sign = 1;
	result.natural_part = MUL_NN_N(factor1.natural_part, factor1.natural_part);
	return result;
}
