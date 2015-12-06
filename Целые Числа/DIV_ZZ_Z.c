/*DIV_ZZ_Z
Описание:
	Функция возвращает частное от деления большего целого числа на меньшее или равное натуральное с остатком(делитель отличен от нуля)
Подключаемые модули:
	DIV_NN_N
Описание переменных:
	num - Первое число
	den - Второе число
	buff - Вспомогательная переменная
	result - Результат деления

Голубев Гордей
Хабаров Артем
4306
*/
#include "../build/main.h"
struct INTEGER DIV_ZZ_Z(struct INTEGER num, struct NATURAL den)
{
	struct INTEGER result;
	int i;
	result.natural_part.index = num.natural_part.index;
	result.natural_part.number = (int*)malloc(result.natural_part.index*sizeof(int));
	for (i = 0; i < result.natural_part.index; ++i)
		result.natural_part.number[i] = num.natural_part.number[i];
	result.natural_part = DIV_NN_N(result.natural_part, den);
	result.natural_part.index = result.natural_part.index;
	result.sign = num.sign;
	return result;
}
