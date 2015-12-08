// Подгружаемые модули отсутствуют
// Прототип void ADD_1N_N(struct NATURAL* A);  
// A - структура с массивом цифр числа, размер [index]
// и номером старшего разряда index
// Добавление 1 к натуральному числу
// Аллаяров и Хабиров, гр. 4305
#include "../build/main.h"

struct NATURAL ADD_1N_N(struct NATURAL A)
{
	int i, flag = 0; // flag - проверка на успешность выполнения операции
	for (i = 0; i < A.index && !flag; i++)
		if (A.number[i] == 9) // проверка, нужно ли делать перенос
		{
			A.number[i] = 0;
			if (i == (A.index - 1)) // является ли текущая цифра последней при проверке
			{
				A.number = (int*)realloc(A.number, (A.index + 1)*sizeof(int));
				A.number[A.index] = 1;
				(A.index)++;  // увеличиваем кол-во разрядов на 1
				flag = 1;
			}
		}
		else
		{
			A.number[i]++; // единица успешно добавлена
			flag = 1;
		}
	return A;
}
