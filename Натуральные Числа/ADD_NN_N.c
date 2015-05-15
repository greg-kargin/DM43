// Подключаемые модули:
// COM_NN_D - не потребовался (???)
// Сидельников, Яшина - 4307

// Выполняет сложение натуральных чисел
struct NATURAL ADD_NN_N(struct NATURAL a, struct NATURAL b)
{
	int i, flag = 0; // flag - проверка на успешность выполнения операции
    for (i = 0; i < (a.index) && !flag; i++)
		{
      if ((a.number[i] + b.number[i]) > 9) // проверка, нужно ли делать перенос
			{
        a.number[i] = ((a.number[i] + b.number[i]) - 10);
				if (i == (*a).index - 1) // является ли цифра последней при проверке
				{
          a.number[a.index] = 1;
          (a.index)++;  // увеличиваем кол-во разрядов на 1
					flag = 1;
				}
				else // "единица в уме", если цифра не последняя 
          a.number[i + 1]++;
			}
			else
        a.number[i] = a.number[i] + b.number[i]; // цифры складываются
		}
    return a;
}
