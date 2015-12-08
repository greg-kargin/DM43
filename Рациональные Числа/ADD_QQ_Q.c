//  ADD_QQ_Q
//  01.05.15.
//  Сложение дробей
#include "../build/main.h"
struct RATIONAL ADD_QQ_Q(struct RATIONAL A, struct RATIONAL B)
{
  
  struct NATURAL NOK; //Наименьшее общее кратное
  struct NATURAL C,D; //Множители
  struct RATIONAL sum;
  
  //Выделение памяти
  //sum.numerator.A = calloc((((COM_NN_D(A.numerator,B.numerator))?A.numerator:B.numerator).index+1)*sizeof(int));
  //sum.denominator.A = calloc(sizeof(A.denominator.index+B.denominator.index)*sizeof(int));
  sum.sign = 0;
  
  if(!(NZER_N_B(A.denominator))||!(NZER_N_B(B.denominator)))
    puts("Ошибка! Отрицательный знаменатель на входе!");
    
  else{
    NOK = LCM_NN_N(A.denominator,B.denominator);
    
    C = DIV_NN_N(NOK,A.denominator);
    D = DIV_NN_N(NOK,B.denominator);
    
    A.numerator = MUL_NN_N(C,A.numerator);
    B.numerator = MUL_NN_N(D,B.numerator);
    
    if(A.sign^B.sign){ // Если дроби разных знаков
      sum.numerator = SUB_NN_N(A.numerator,B.numerator);
      sum.denominator = A.denominator;
      sum.sign = ((!COM_NN_D(A.numerator,B.numerator))?A:B).sign; //Выбираем знак суммы
    }                                                                                    //как знак большего числа
    else //Если дроби одного знака
      sum.numerator = ADD_NN_N(A.numerator,B.numerator);
      sum.denominator = A.denominator;
      sum.sign = A.sign;
  }
  return sum;
}
