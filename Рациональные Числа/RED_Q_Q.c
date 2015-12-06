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
#include "../build/main.h"
struct RATIONAL RED_Q_Q (struct RATIONAL a)
  {
    struct RATIONAL b; //Возвращаемая дробь
  	struct NATURAL NOD = GCF_NN_N(a.numerator,a.denominator); //НОД числителя и знаменателя
  	b.numerator=DIV_NN_N(a.numerator, NOD);
  	b.denominator=DIV_NN_N(a.denominator, NOD);
  	b.sign=a.sign;
  	return b;
  }
