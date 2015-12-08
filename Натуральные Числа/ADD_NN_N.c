// Подключаемые модули:
// COM_NN_D - не потребовался (???)
// Сидельников, Яшина - 4307

// Выполняет сложение натуральных чисел
#include "../build/main.h"

struct NATURAL ADD_NN_N(struct NATURAL A, struct NATURAL B)
{
	int min = (COM_NN_D(A, B)==2) ? B.index : A.index;
	int i; // flag - проверка на успешность выполнения операции
	struct NATURAL *t, *tm;
	t = (COM_NN_D(A, B)==2) ? &A : &B;
	tm = (t == &A) ? &B : &A;
	for (i = 0; i < min; i++)
	{
		if (((*t).number[i] + (*tm).number[i]) > 9) // проверка, нужно ли делать перенос
		{
			(*t).number[i] = (((*t).number[i] + (*tm).number[i]) - 10);
			if (i == (*t).index - 1 && (*t).index!=(*tm).index) // является ли цифра последней при проверке
			{
				(*t).number = (int*)realloc((*t).number, ((*t).index + 1)*sizeof(int));
				(*t).number[(*t).index++] = 1;  // увеличиваем кол-во разрядов на 1
			}
			else // "единица в уме", если цифра не последняя 
				(*t).number[i + 1]++;
		}
		else
			(*t).number[i] = (*t).number[i] + (*tm).number[i]; // цифры складываются
	}
	return *t;
}