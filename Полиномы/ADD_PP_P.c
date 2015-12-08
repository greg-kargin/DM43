//Сложение многочленов
#include "../build/main.h"

struct POLYNOMIAL ADD_PP_P(struct POLYNOMIAL first, struct POLYNOMIAL second)
{
	struct POLYNOMIAL result;
	/*rezult.factors = NULL;
	int mem = 0;
	if (first.degree >= second.degree)
	{
		rezult.degree = first.degree;
		rezult.factors = (struct RATIONAL*) realloc(rezult.factors, rezult.degree);
		for (int i = 0; i < second.degree; i++)
		{
			rezult.factors[i] = ADD_QQ_Q(first.factors[i].numerator, first.factors[i].denominator, first.factors[i].sign, second.factors[i].numerator, second.factors[i].denominator, second.factors[i].sign, rezult.factors[i].numerator, rezult.factors[i].denominator, rezult.factors[i].sign);
			mem = i;
		}
		for (int i = mem; i < first.degree; i++)
		{
			rezult.factors[i] = first.factors[i];
		}
	}
	else
	{
		rezult.degree = second.degree;
		rezult.factors = (struct RATIONAL*)realloc(rezult.factors, rezult.degree);
		for (int i = 0; i < first.degree; i++)
		{
			rezult.factors[i] = ADD_QQ_Q(first.factors[i].numerator, first.factors[i].denominator, first.factors[i].sign, second.factors[i].numerator, second.factors[i].denominator, second.factors[i].sign, rezult.factors[i].numerator, rezult.factors[i].denominator, rezult.factors[i].sign);
			mem = i;
		}
		for (int i = mem; i < second.degree; i++)
		{
			rezult.factors[i] = second.factors[i];
		}
	}
	return rezult;*/
}
