//Производная многочлена
#include "../build/main.h"
struct POLYNOMIAL DER_P_P(struct POLYNOMIAL a)
{
	struct POLYNOMIAL res;
	int i, j;
	res.degree = a.degree - 1;
	res.factors = (struct RATIONAL *)malloc(a.degree * sizeof(struct RATIONAL));
	for (i = 0; i < a.degree; i++)
	{
		res.factors[i].numerator.index = a.factors[i + 1].numerator.index;
		res.factors[i].numerator = MUL_ND_N(a.factors[i + 1].numerator, i + 1);
		res.factors[i].denominator.index = a.factors[i + 1].denominator.index;
		res.factors[i].denominator.number = (int *)malloc(res.factors[i].denominator.index * sizeof(int));
		for (j = 0; j < res.factors[i].denominator.index; j++)
			res.factors[i].denominator.number[j] = a.factors[i + 1].denominator.number[j];
	}
	return res;
}
