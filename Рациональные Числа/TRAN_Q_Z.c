//Преобразование дробного в целое (если знаменатель равен 1)
#include "../build/main.h"

struct INTEGER TRAN_Q_Z(struct RATIONAL B)
{
	struct INTEGER A;
	A.sign = B.sign;
	A.natural_part.number = (int*)malloc(B.numerator.index*sizeof(int));
	A.natural_part.index = B.numerator.index;
	for (int i = 0; i < A.natural_part.index; ++i)
		A.natural_part.number[i] = B.numerator.number[i];
	return A;
}
