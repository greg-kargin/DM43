
struct NATURAL MUL_NN_N(struct NATURAL E, struct NATURAL B)
  {
  // Инициализация числа
  struct NATURAL result;
  result.index = ( (E.index * B.index) / 10 > 0) ? (i + j) : (i + j - 1);
  int i;
  for (i = 0; i < result.index; ++i)
    result.number[i] = 0;
  
  for (i = 0; i < B.index; ++i)
    result = ADD_NN_N( result, MUL_ND_N(MUL_Nk_N(E, i), B.number[i]) );
  }  
      
/*Подключаемые модули:
  MUL_ND_N - умножение числа на цифру
  MUL_Nk_N - умножение числа на 10^k
  NATURAL MUL_NN_N(NATURAL,NATURAL) - прототип
  NATURAL - первое натуральное число
  NATURAL - второе натуральное число    
  Выполнили: Кановский, Веденин 4306*/

