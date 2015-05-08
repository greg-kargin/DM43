
NATURAL MUL_NN_N(NATURAL E,NATURAL B)
{
  int i;
  for(i=0;i<B.n;i++)
    {
      E=MUL_ND_N(E,B.A[i]);
      E=MUL_Nk_N(E,i);
    } 
  return(E);
}    
      
/*Подключаемые модули:
  MUL_ND_N - умножение числа на цифру
  MUL_Nk_N - умножение числа на 10^k
  NATURAL MUL_NN_N(NATURAL,NATURAL) - прототип
  NATURAL - первое натуральное число
  NATURAL - второе натуральное число    
  Выполнили: Кановский, Веденин 4306*/

