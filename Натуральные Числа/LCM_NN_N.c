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
#include "MULL_NN_N.c"
struct NATURAL LCM_NN_N(struct NATURAL a, struct NATURAL b)
{
	return MUL_NN_N( DIV_NN_N( a, GCF_NN_N(a, b) ), b);
	//НОК находится по формуле: a*b/НОД(a,b)
}
