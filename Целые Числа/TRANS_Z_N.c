/*
TRANS_Z_N - Преобразование целого неотрицательного в натуральное

Подключаемые модули: нет.

Прототип: struct NATURAL TRANS_Z_N (struct INTEGER) 
Где struct INTEGER - получаемое целое число

Возвращает: натуральное число

Выполнили: Кучинский К.С. / Дубинкин Д.В. - 4306
*/

struct NATURAL TRANS_Z_N(struct INTEGER inp_num)
{
	struct NATURAL out_num;

	 out_num->number = inp_num->number;  //Копируем целое число в натуральное без знака
	 out_num->index = inp_num->index;
	
	return out_num;
}
