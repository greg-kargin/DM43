/*
Подгружаемы модули:
ABS_Z_N
GCF_NN_N
DIV_ZZ_Z

Структура:
struct RATIONAL
{
    struct NATURAL numerator; //числитель
    struct NATURAL denominator; //знаменатель
    short sign; //знак
}

Описание переменных:
A - дробь

Описание значения возвращаемого функцией:
Функция возвращает дробь, полученную путем сокращения исходной.

Создатели:
Цветков Борис
Мезенцев Павел
группа 4306
*/
#include "../build/main.h"
struct RATIONAL RED_Q_Q (struct RATIONAL A)
  {
    struct RATIONAL B; //Возвращаемая дробь
  	struct NATURAL NOD = GCF_NN_N(A.numerator,A.denominator); //НОД числителя и знаменателя
  	B.numerator=DIV_NN_N(A.numerator, NOD);
  	B.denominator=DIV_NN_N(A.denominator, NOD);
  	B.sign=A.sign;
  	return B;
  }
