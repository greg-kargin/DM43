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
struct INTEGER DIV_ZZ_Z(struct INTEGER num, struct NATURAL den)
{
	struct INTEGER result;
	struct NATURAL buff;
  int i;

	buff.index = num.natural_part.index;
  for (i = 0; i < buff.index; ++i)
    buff.number[i] = num.natural_part.number[i];
	buff = DIV_NN_N(buff, den);
	result.natural_part.index = buff.index;
  for (i = 0; i < buff.index; ++i)
    result.natural_part.number[i] = buff.number[i];
	result.sign = num.sign;
	return result;
}
