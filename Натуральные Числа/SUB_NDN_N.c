// Подгружаемые модули:
//SUB_NN_N - вычитание из первого большего числа, второе меньшее или равное
//MUL_ND_N - умножение на цифру
//COM_NN_D - сравнение двух чисел
// Прототип struct NATURAL SUB_NDN_N(struct NATURAL a, struct NATURAL b, struct NATURAL c), где
// 1-й параметр - уменьшаемое
// 2-й параметр - вычитаемое
// 3-й параметр - цифра, на которую умножаем, в случае неотрицательного результата
// Возвращает результат вычитания из натурального другого натурального,
//     умноженного на цифру, в случае неотрицательного результата
// Филькина - Никифоров - 4305
 
struct NATURAL SUB_NDN_N(struct NATURAL a, struct NATURAL b, struct NATURAL c)
{
  struct INTEGER r;
  if (COM_NN_D(a, b) == 2)
    b = MUL_ND_N(b, c);
  r = SUB_NN_N(b, a);
  if (COM_NN_D(a, b) == 1)
    r.sign = 1;
  return r;
}
