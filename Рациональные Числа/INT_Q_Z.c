//Подключаемые модули отсутствуют
//int INT_Q_Z(struct RATIONAL A), где A - проверяемое число
//Функция возвращает 1, если проверяемое число целое, иначе 0
//Филькина - Никифоров -4305
#include "../build/main.h"
 
int INT_Q_Z(struct RATIONAL A)
{
	if (A.denominator.number)
		return (A.denominator.index == 1 && A.denominator.number[0] == 1)? 1 : 0;
	return 1;
}
