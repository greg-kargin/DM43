/*
Подгружаемы модули:
MUL_ZZ_Z

Описание переменных:
A - первая дробь
B - вторая дробь
с - новая дробь

Описание значения возвращаемого функцией:
Функция возвращает новую дробь, которая является результатом деления.

Создатели:
Самсонов Вячеслав
Сыромятников Михаил
группа 4306
*/
#include "../build/main.h"
struct RATIONAL DIV_QQ_Q(struct RATIONAL A, struct RATIONAL B)
{
	struct RATIONAL c;
	c.numerator = MUL_NN_N(A.numerator, B.denominator);
	c.denominator = MUL_NN_N(A.denominator, B.numerator);
	c.sign = (A.sign == B.sign) ? 0 : 1;
	return c;
}
