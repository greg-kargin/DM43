// Описание: 
// Функция возвращает НОД двух чисел, которые передаются в функцию. 
// Описание переменных:
// А - Большее число
// Б - Меньше либо равное число
// С - Временная переменная

// Используемые функции: 
// COM_NN_D		NZER_N_B		MOD_NN_N
#include "MOD_NN_N.c"
#include "../build/main.h"

struct NATURAL GCF_NN_N (struct NATURAL A, struct NATURAL B)
{
	struct NATURAL C;
	if (COM_NN_D (A, B) == 1)
	{
		C = A;
		A = B;
		B = C;
	}
	else
		C = A;
	while (NZER_N_B (C) == 1)
	{
		C = MOD_NN_N (A, B);
		A = B;
		B = C;
	}
	return A;
}
