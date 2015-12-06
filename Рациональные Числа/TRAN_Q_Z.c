//Преобразование дробного в целое (если знаменатель равен 1)
#include "../build/main.h"

struct INTEGER TRAN_Q_Z(struct RATIONAL b)
{
	struct INTEGER a;
	a.sign = b.sign;
	a.natural_part.number = (int*)malloc(b.numerator.index*sizeof(int));
	a.natural_part.index = b.numerator.index;
	for (int i = 0; i < a.natural_part.index; ++i)
		a.natural_part.number[i] = b.numerator.number[i];
	return a;
}
