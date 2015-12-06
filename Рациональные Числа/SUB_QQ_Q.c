/*
Описание значения, возвращаемого функцией:
Функция возвращает новую дробь, которая является результатом вычитания.

Создатели:
Молодцова Юлия
Рогачева Екатерина
группа 4305
*/
#include "../build/main.h"
struct RATIONAL SUB_QQ_Q(struct RATIONAL number1, struct RATIONAL number2)
  {
  //Вычитание из number1 number2

  struct NATURAL NOK; //Наименьшее общее кратное
  struct NATURAL factor1, factor2; //Множители
  struct RATIONAL result;

  //Выделение памяти
  //result.numerator = calloc((((COM_NN_D(number1.numerator, number2.numerator)) ? number1.numerator : number2.numerator).index)*sizeof(int));
  //result.denominator = calloc(sizeof(number1.denominator.index + number2.denominator.index)*sizeof(int));
  result.sign = 0;

  if (!(NZER_N_B(number1.denominator)) || !(NZER_N_B(number2.denominator)))
    puts("Ошибка! Отрицательный знаменатель на входе!");

  else
    {
    NOK = LCM_NN_N(number1.denominator, number2.denominator);

    factor1 = DIV_NN_N(NOK, number1.denominator);
    factor2 = DIV_NN_N(NOK, number2.denominator);

    number1.numerator = MUL_NN_N(factor1, number1.numerator);
    number2.numerator = MUL_NN_N(factor2, number2.numerator);

    if (number1.sign == number2.sign)
      { // Если дроби одного знака
      result.numerator = SUB_NN_N(number1.numerator, number2.numerator);
      result.denominator = NOK;
      /*if (!COM_NN_D(number1.numerator, number2.numerator))
        { //Число1 > Число2
        if (!number2.sign)//знак положителен
          result.sign = 0;
        else //знак отрицателен
          result.sign = 1;
      else //Число2 > Число1
      if (!number1.sign)//знак положителен
        result.sign = 1;
      else //знак отрицателен
        result.sign = 0;
        }
      else //Если дроби разных знаков
        result.numerator = ADD_QQ_Q(number1.numerator, number2.numerator);*/
      result.denominator = NOK;
      if (number1.sign)
        result.sign = 0;
      else
        result.sign = 1;
      }
    return result;
    }
  }
