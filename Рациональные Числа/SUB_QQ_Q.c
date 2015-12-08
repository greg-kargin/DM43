/*
Описание значения, возвращаемого функцией:
Функция возвращает новую дробь, которая является результатом вычитания.

Создатели:
Молодцова Юлия
Рогачева Екатерина
группа 4305
*/
#include "../build/main.h"
struct RATIONAL SUB_QQ_Q(struct RATIONAL A, struct RATIONAL B)
  {
  //Вычитание из A B

  struct NATURAL NOK; //Наименьшее общее кратное
  struct NATURAL C, D; //Множители
  struct RATIONAL result;

  //Выделение памяти
  //result.numerator = calloc((((COM_NN_D(A.numerator, B.numerator)) ? A.numerator : B.numerator).index)*sizeof(int));
  //result.denominator = calloc(sizeof(A.denominator.index + B.denominator.index)*sizeof(int));
  result.sign = 0;

  if (!(NZER_N_B(A.denominator)) || !(NZER_N_B(B.denominator)))
    puts("Ошибка! Отрицательный знаменатель на входе!");

  else
    {
    NOK = LCM_NN_N(A.denominator, B.denominator);

    C = DIV_NN_N(NOK, A.denominator);
    D = DIV_NN_N(NOK, B.denominator);

    A.numerator = MUL_NN_N(C, A.numerator);
    B.numerator = MUL_NN_N(D, B.numerator);

    if (A.sign == B.sign)
      { // Если дроби одного знака
      result.numerator = SUB_NN_N(A.numerator, B.numerator);
      result.denominator = NOK;
      /*if (!COM_NN_D(A.numerator, B.numerator))
        { //Число1 > Число2
        if (!B.sign)//знак положителен
          result.sign = 0;
        else //знак отрицателен
          result.sign = 1;
      else //Число2 > Число1
      if (!A.sign)//знак положителен
        result.sign = 1;
      else //знак отрицателен
        result.sign = 0;
        }
      else //Если дроби разных знаков
        result.numerator = ADD_QQ_Q(A.numerator, B.numerator);*/
      result.denominator = NOK;
      if (A.sign)
        result.sign = 0;
      else
        result.sign = 1;
      }
    return result;
    }
  }
