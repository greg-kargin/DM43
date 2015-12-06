//Подключаемые модули отсутствуют
//int INT_Q_Z(struct RATIONAL a), где a - проверяемое число
//Функция возвращает 1, если проверяемое число целое, иначе 0
//Филькина - Никифоров -4305
#include "../build/main.h"
 
int INT_Q_Z(struct RATIONAL a)
{
	if (a.denominator.number)
		return (a.denominator.index == 1 && a.denominator.number[0] == 1)? 1 : 0;
	return 1;
}
