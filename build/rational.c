#include "integer.h"
#include "inputs.h"

int menuItemRational()
  {
	  printf("1. %s\n", "Ввод рациональных чисел");
	  printf("2. %s\n", "Вывод рациональных чисел");
	  printf("3. %s\n", "Сокращение дроби");
	  printf("4. %s\n", "Проверка на целое");
	  printf("5. %s\n", "Преообразование целого в дробное");
	  printf("6. %s\n", "Преобразование дробного в целое");
	  printf("7. %s\n", "Сложение");
	  printf("8. %s\n", "Вычитание");
	  printf("9. %s\n", "Умножение");
	  printf("10. %s\n", "Деление");
	  printf("11. %s\n", "Возврат в меню");
	  return enterIntNumInterval(1, 13);
  }

int menuRational(struct RATIONAL* rats, struct INTEGER* ints)
{
	int tMin = 0, tMax = 150;
	int item;
	char ch;
	do
	{
		switch (item = menuItemRational())
		{
		case 1:
			rats[0] = ENRAT();
			rats[1] = ENRAT();
			break;

		case 2:
			for (short int i = 0; i < COUNT_NUMBERS; ++i)
				if (rats[i].denominator.index>0)
				{
					printf("Число %c:", (65 + i));
					output_Q(rats[i]);
					printf("\n");
				}
				else
					printf("Рациональное число %c отсутствует\n", (65 + i));
			break;

		case 3:
			ch = enterCharInterval('A', 'C', "Выберите число для сокращения (A, B или C): ");
			rats[ch - 65] = RED_Q_Q(rats[ch - 65]);
			break;

		case 4:
			ch = enterCharInterval('A', 'C', "Выберите число для проверки на целое (A, B или C): ");
			if (INT_Q_Z(rats[ch-65]))
				printf("Число %c целое", ch-65);
			else
				printf("Число %c дробное", ch - 65);
			break;

		case 5:
			ch = enterCharInterval('A', 'C', "Выберите число для перевода из целого в рациальное (A, B или C): ");
			rats[ch - 65] = TRAN_Z_Q(ints[ch - 65]);
			break;

		case 6:
			ch = enterCharInterval('A', 'C', "Выберите число для перевода из рациального в целое (A, B или C): ");
			ints[ch - 65] = TRAN_Q_Z(rats[ch - 65]);
			break;

		case 7:
			rats[2] = ADD_QQ_Q(rats[0], rats[1]);
			break;

		case 8:
			rats[2] = SUB_QQ_Q(rats[0], rats[1]);
			break;

		case 9:
			rats[2] = MUL_QQ_Q(rats[0], rats[1]);
			break;

		case 10:
			rats[2] = DIV_QQ_Q(rats[0], rats[1]);
			break;
		}
		system("pause");
		system("cls");
		printf("Операция успешно завершена!\n");
		system("pause");
	} while (item != 10);
	return 0;
}