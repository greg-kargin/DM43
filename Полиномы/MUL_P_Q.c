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

struct POLYNOMIAL MUL_P_Q(struct POLYNOMIAL a, struct RATIONAL b)
{
	struct POLYNOMIAL c;
  for (int i = 0; i<a.degree; i++)
    {
    c.factors[i].numerator = MUL_ZZ_Z(a.factors[i].numerator, b.numerator);
    c.factors[i].denominator = MUL_ZZ_Z(a.factors[i].denominator, b.denominator);
    c.factors[i].sign = (a.factors[i].sign == b.sign) ? 0 : 1;
    }
	return c;
}
