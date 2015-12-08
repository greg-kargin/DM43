#include "natural.h"
#include "inputs.h"

int menuItemNatural()
  {
	  system("cls");
	  printf("1. %s\n", "Ввод натуральных чисел");
	  printf("2. %s\n", "Вывод натуральных чисел");
	  printf("3. %s\n", "Сравнение чисел");
	  printf("4. %s\n", "Проверка на равенство нулю");
	  printf("5. %s\n", "Добавление единицы");
	  printf("6. %s\n", "Сложение");
	  printf("7. %s\n", "Вычитание");
	  printf("8. %s\n", "Умножение на цифру");
	  printf("9. %s\n", "Умножение на 10 в степени k");
	  printf("10. %s\n", "Умножение чисел");
	  printf("11. %s\n", "Вычитание числа, умноженного на цифру");
	  printf("12. %s\n", "Вычисления первой цифры деления большего\n    натурального на меньшее, домноженное на 10^k");
	  printf("13. %s\n", "Частное от деления");
	  printf("14. %s\n", "Остаток от деления");
	  printf("15. %s\n", "НОД двух чисел");
	  printf("16. %s\n", "НОК двух чисел");
	  printf("17. %s\n", "Возврат в меню");

	  return enterIntNumInterval(1,17);
  }

int menuNatural(struct NATURAL* nats)
{
	int tMin = 0, tMax = 150;
	int item;
	char ch, ch1;
	for (short int i = 0; i < COUNT_NUMBERS; ++i)
		nats[i].index = 0;
	//nats[0] = ENNAT();
	//nats[1] = ENNAT();
	do
	{
		item = menuItemNatural();
		system("cls");
		switch (item)
		{
		case 1:
			ch = enterCharInterval('A', 'B', "Выберите число для ввода (A, B): ");
			printf("Введите число %c>0:", ch);
			nats[ch-65] = ENNAT();
			break;

		case 2:
			for (short int i = 0; i < COUNT_NUMBERS; ++i)
				if (nats[i].index>0)
				{
					printf("Число %c:", (65 + i));
					output_N(nats[i]);
					printf("\n");
				}
				else
					printf("Натуральное число %c отсутствует\n", (65 + i));
			break;

		case 3:
			ch = enterCharInterval('A', 'C', "Выберите первое сравнимое число (A, B или C): ");
			ch1 = enterCharInterval('A', 'C', "Выберите второе сравнимое число (A, B или C): ");
			switch (COM_NN_D(nats[ch-65], nats[ch1-65]))
			{
				case 0:
					printf("%c=%c", ch, ch1);
					break;
				case 1:
					printf("%c>%c", ch, ch1);
					break;
				case 2:
					printf("%c<%c", ch, ch1);
					break;
			}
			break;

		case 4:
			ch = enterCharInterval('A', 'C', "Выберите проверяемое число (A, B или C): ");
			printf("Число %c %s равно нулю\n", ch, (NZER_N_B(nats[ch-65])) ? "" : "не");
			break;

		case 5:
			ch = enterCharInterval('A', 'C', "Выберите число для добавления единицы (A, B или C): ");
			nats[ch - 65] = ADD_1N_N(nats[ch - 65]);
			break;

		case 6:
			nats[2] = ADD_NN_N(nats[0], nats[1]);
			break;

		case 7:
			nats[2] = SUB_NN_N(nats[0], nats[1]);
			break;

		case 8:
			ch = enterCharInterval('A', 'C', "Выберите число для умножения (A, B или C): ");
			printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
			nats[ch - 65] = MUL_ND_N(nats[ch - 65], enterIntNumInterval(tMin, tMax));
			break;

		case 9:
			ch = enterCharInterval('A', 'C', "Выберите число для умножения на 10^k (A, B или C): ");
			printf("Введите число k (от %d, до %d) ", tMin, tMax);
			nats[ch - 65] = MUL_Nk_N(nats[ch-65], enterIntNumInterval(tMin, tMax));
			break;

		case 10:
			nats[2] = MUL_NN_N(nats[0], nats[1]);
			break;

		case 11:
			printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
			nats[2] = SUB_NDN_N(nats[0], nats[1], enterIntNumInterval(tMin, tMax));
			break;

		case 12:
			nats[2] = DIV_NN_Dk(nats[0], nats[1]);
			break;

		case 13:
			nats[2] = DIV_NN_N(nats[0], nats[1]);
			break;

		case 14:
			nats[2] = MOD_NN_N(nats[0], nats[1]);
			break;

		case 15:
			nats[2] = GCF_NN_N(nats[0], nats[1]);
			break;

		case 16:
			nats[2] = LCM_NN_N(nats[0], nats[1]);
			break;
		}
		printf("Операция успешно завершена!\n");
		system("pause");
	} while (item != 17);
	return 0;
}


