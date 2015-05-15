/*
TRANS_Z_N - Преобразование целого неотрицательного в натуральное

Подключаемые модули: нет.

Прототип: struct NATURAL TRANS_Z_N (struct INTEGER) 
Где struct INTEGER - получаемое целое число

Возвращает: натуральное число

Выполнили: Кучинский К.С. / Дубинкин Д.В. - 4306
*/

struct NATURAL TRANS_Z_N(struct INTEGER inp_num)  // идиотизм исправлен
{
  struct NATURAL out_num;

  out_num.index = inp_num.natural_part.index;
  out_num.number = new int[out_num.index];

  int i;
  for (i = 0; i < out_num.index; ++i)
    out_num.number[i] = inp_num.natural_part.number[i];  //Копируем целое число в натуральное без знака

	return out_num;
}
