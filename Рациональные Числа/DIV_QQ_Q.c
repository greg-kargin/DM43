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
struct RATIONAL DIV_QQ_Q(struct RATIONAL a, struct RATIONAL b)
{
	struct RATIONAL c;
	c.numerator = MUL_ZZ_Z(a.numerator, b.denominator);
	c.denominator = MUL_ZZ_Z(a.denominator, b.numerator);
  c.sign = (a.sign == b.sign) ? 0 : 1;
	return c;
}
