/*
Подгружаемы модули:
MUL_ZZ_Z

Описание переменных:
a - исходный многочлен
b - рациональный коэффициент
с - возвращаемый многочлен

Описание значения возвращаемого функцией:
Функция возвращает новый многочлен, который является результатом умножения исходного многочлена на рациональное число.

Создатели:
Самсонов Вячеслав
Сыромятников Михаил
группа 4306
*/
#include "../build/main.h"
struct POLYNOMIAL MUL_P_Q(struct POLYNOMIAL a, struct RATIONAL b)
{
	struct POLYNOMIAL c;
	c.factors = (int*)malloc(a.degree*sizeof(int));
	for (int i = 0; i < a.degree; i++)
	{
		c.factors[i].numerator = MUL_NN_N(a.factors[i].numerator, b.numerator);
		c.factors[i].denominator = MUL_NN_N(a.factors[i].denominator, b.denominator);
		c.factors[i].sign = (a.factors[i].sign == b.sign) ? 0 : 1;
	}
	return c;
}
