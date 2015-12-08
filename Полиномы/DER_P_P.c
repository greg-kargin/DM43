//Производная многочлена
#include "../build/main.h"
struct POLYNOMIAL DER_P_P(struct POLYNOMIAL A)
{
	struct POLYNOMIAL res;
	int i, j;
	res.degree = A.degree - 1;
	res.factors = (struct RATIONAL *)malloc(A.degree * sizeof(struct RATIONAL));
	for (i = 0; i < A.degree; i++)
	{
		res.factors[i].numerator.index = A.factors[i + 1].numerator.index;
		res.factors[i].numerator = MUL_ND_N(A.factors[i + 1].numerator, i + 1);
		res.factors[i].denominator.index = A.factors[i + 1].denominator.index;
		res.factors[i].denominator.number = (int *)malloc(res.factors[i].denominator.index * sizeof(int));
		for (j = 0; j < res.factors[i].denominator.index; j++)
			res.factors[i].denominator.number[j] = A.factors[i + 1].denominator.number[j];
	}
	return res;
}
