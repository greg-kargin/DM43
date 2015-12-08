/*
Подгружаемы модули:
MUL_ZZ_Z

Описание переменных:
A - исходный многочлен
B - рациональный коэффициент
с - возвращаемый многочлен

Описание значения возвращаемого функцией:
Функция возвращает новый многочлен, который является результатом умножения исходного многочлена на рациональное число.

Создатели:
Самсонов Вячеслав
Сыромятников Михаил
группа 4306
*/
#include "../build/main.h"
struct POLYNOMIAL MUL_P_Q(struct POLYNOMIAL A, struct RATIONAL B)
{
	struct POLYNOMIAL c;
	c.factors = (struct RATIONAL*)malloc(A.degree*sizeof(struct RATIONAL));
	for (int i = 0; i < A.degree; i++)
	{
		c.factors[i].numerator = MUL_NN_N(A.factors[i].numerator, B.numerator);
		c.factors[i].denominator = MUL_NN_N(A.factors[i].denominator, B.denominator);
		c.factors[i].sign = (A.factors[i].sign == B.sign) ? 0 : 1;
	}
	return c;
}
