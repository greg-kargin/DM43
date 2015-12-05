/*
Подгружаемые модули:
COM_NN_D //сравнение натуральных чисел

Описание переменных:
a, b - введенные числа
rec - результат вычитания

Описание значения, возвращаемого функцией:
Функция возвращает результат вычитания.

Создатели:
Молодцова Юлия
Рогачева Екатерина
группа 4305
*/
#include "../build/main.h"
struct NATURAL SUB_NN_N(struct NATURAL a, struct NATURAL b)
{
	struct NATURAL first, second, res;
	bool flag = true;
	int n, i;
	//Находим большее/меньшее число
	n = COM_NN_D(a, b);
	if (n == 0)
	{
		res.number = (int *)malloc(sizeof(int));
		*(res.number) = 0;
		res.index = 1;
	}

	else
	{
		res.number = NULL;
		if (n == 2)
		{
			first = a;
			second = b;
		}
		else
		{
			first = b;
			second = a;
		}


		for (i = 0; i < second.index; i++)
		{
			res.number = (int *)realloc(res.number, (i + 1)*sizeof(int));
			if (*(first.number + i) < *(second.number + i))
			{
				(*(first.number + (i + 1)))--;
				*(first.number + i) += 10;
				*(res.number + i) = *(first.number + i) - *(second.number + i);
			}
			*(res.number + i) = *(first.number + i) - *(second.number + i);
		}
		for (i = second.index; i < first.index; i++)
		{
			if (*(first.number + i) < 0)
			{
				(*(first.number + (i + 1)))--;
				*(first.number + i) += 10;
			}
		}

		for (i = first.index; i > second.index && flag; i--)
		{
			if (*(first.number + i) == 0)
				first.index = first.index - 1;
			else
				flag = false;
		}
		for (i = second.index; i < first.index; i++)
		{
			res.number = (int *)realloc(res.number, (i + 1)*sizeof(int));
			*(res.number + i) = *(first.number + i);
		}
		res.index = i;
	}
	return res;
}
