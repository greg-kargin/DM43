//Подключаемые модули отсутствуют
//int INT_Q_Z(struct RATIONAL a), где a - проверяемое число
//Функция возвращает 1, если проверяемое число целое, иначе 0
//Филькина - Никифоров -4305
 
 
int INT_Q_Z(struct RATIONAL a)
{
	return a.denominator.number ? 0 : 1;
}
