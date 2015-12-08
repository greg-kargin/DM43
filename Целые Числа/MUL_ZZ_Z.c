// Подгружаемые модули:
//POZ_Z_D
//ABS_Z_N
//MUL_NN_N
//MUL_Z - _Z"

// Выполняет умножение целых чисел
// Станевич, Денискова - 4306
#include "../build/main.h"

struct INTEGER MUL_ZZ_Z(struct INTEGER A, struct INTEGER B)  // result = A * B
{
	struct INTEGER result;
	if(POZ_Z_D(A)==2 || POZ_Z_D(B)==2)
	result.sign = 1;
	result.natural_part = MUL_NN_N(A.natural_part, A.natural_part);
	return result;
}
