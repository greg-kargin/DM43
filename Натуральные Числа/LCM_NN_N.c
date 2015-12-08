/*
Функция:             LCM_NN_N - НОК натуральных чисел

Подключаемые модули: GCF_NN_N - НОД натуральных чисел
					 MUL_NN_N - Умножение натуральных
					 DIV_NN_N - Частное от деления

Прототип: struct NATURAL LCM_NN_N(struct NATURAL, struct NATURAL)
Где struct NATURAL - первое и второе натуральные числа.

Возвращает: НОК чисел(натуральное число)

Выполнили: Кучинский К.С. / Дубинкин Д.В. - 4306
*/
#include "../build/main.h"

struct NATURAL LCM_NN_N(struct NATURAL A, struct NATURAL B)
{
	return MUL_NN_N( DIV_NN_N( A, GCF_NN_N(A, B) ), B);
	//НОК находится по формуле: A*B/НОД(A,B)
}
