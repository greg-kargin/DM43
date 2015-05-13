// Описание:
// Функции передается натуральное число. Возвращает - целое.
// Описание переменных:
// А - Натуральное число
// Б - Целое число
// i - Вспомогательная переменная
 
INTEGER TRANS_N_Z (NATURAL A)
{
	INTEGER B;
	B.number = (short int*) malloc ((B.index + 1) * sizeof(short int));
	for (int i = 0; i <= B.index; i++)
		B.number[i] = A.number[i];
	B.index = A.index;
	B.sign = 0;
	return B;
}
