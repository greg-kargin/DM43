// Подгружаемые модули отсутствуют
// Прототип void ADD_1N_N(struct NATURAL* natural);  
// natural - структура с массивом цифр числа, размер [index]
// и номером старшего разряда index
// Добавление 1 к натуральному числу
// Аллаяров и Хабиров, гр. 4305

struct NATURAL ADD_1N_N(struct NATURAL natural)
{
	int i, flag = 0; // flag - проверка на успешность выполнения операции
	for (i = 0; i<natural.index && !flag; i++)
		if (natural.number[i] == 9) // проверка, нужно ли делать перенос
		{
			natural.number[i] = 0;
			if (i == natural.index - 1) // является ли текущая цифра последней при проверке
			{
				natural.number = (int *)realloc(natural.number, (natural.index + 1)*sizeof(int));
				natural.number[natural.index] = 1;
				(natural.index)++;  // увеличиваем кол-во разрядов на 1
				flag = 1;
			}
		}
		else
		{
			natural.number[i]++; // единица успешно добавлена
			flag = 1;
		}
	return natural;
}
