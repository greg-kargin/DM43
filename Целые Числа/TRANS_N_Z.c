// Описание:
// Функции передается натуральное число. Возвращает - целое.
// Описание переменных:
// А - Натуральное число
// Б - Целое число
// i - Вспомогательная переменная
#include "../build/main.h"
struct INTEGER TRANS_N_Z (struct NATURAL A)
{
	struct INTEGER B;
	B.natural_part.index = A.index;
	B.natural_part.number=(int*) malloc((B.natural_part.index + 1) * sizeof(int));
	for (int i = 0; i <= B.natural_part.index; i++)
		B.natural_part.number[i] = A.number[i];
	B.sign = 0;
	return B;
}
