/*
Подгружаемы модули:
MUL_ZZ_Z

Описание переменных:
a - первая дробь
b - вторая дробь
с - новая дробь

Описание значения возвращаемого функцией:
Функция возвращает новую дробь, которая является результатом деления.

Создатели:
Самсонов Вячеслав
Сыромятников Михаил
группа 4306
*/
#include "../build/main.h"
struct RATIONAL DIV_QQ_Q(struct RATIONAL a, struct RATIONAL b)
{
	struct RATIONAL c;
	c.numerator = MUL_NN_N(a.numerator, b.denominator);
	c.denominator = MUL_NN_N(a.denominator, b.numerator);
	c.sign = (a.sign == b.sign) ? 0 : 1;
	return c;
}
