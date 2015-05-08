/*
Подгружаемы модули:
ABS_Z_N
GCF_NN_N
DIV_ZZ_Z

Структура:
struct RATIONAL
{
    NATURAL numerator; //числитель
    NATURAL denominator; //знаменатель
    short sign; //знак
}

Описание переменных:
a - дробь

Описание значения возвращаемого функцией:
Функция возвращает дробь, полученную путем сокращения исходной.

Создатели:
Цветков Борис
Мезенцев Павел
группа 4306
*/

RATIONAL RED_QQ_Q (RATIONAL a)
  {
    RATIONAL b; //Возвращаемая дробь
  	NATURAL NOD=GCF_NN_N(a.numerator,a.denominator); //НОД числителя и знаменателя
  	b.numerator=DIV_ZZ_Z(a.numerator,NOD);
  	b.denominator=DIV_ZZ_Z(a.denominator,NOD);
  	b.sign=a.sign;
  	return b;
  }
