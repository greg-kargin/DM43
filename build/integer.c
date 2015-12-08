#include "integer.h"
#include "inputs.h"

int menuItemInteger()
  {
	  printf("1. %s\n", "Ввод целых чисел");
	  printf("2. %s\n", "Вывод целых чисел");
	  printf("3. %s\n", "Абсолютная величина числа");
	  printf("4. %s\n", "Определение положительности числа");
	  printf("5. %s\n", "Изменение знака");
	  printf("6. %s\n", "Преобразование натурального в целое");
	  printf("7. %s\n", "Преобразование целого неотрицательного в натуральное");
	  printf("8. %s\n", "Сложение");
	  printf("9. %s\n", "Вычитание");
	  printf("10. %s\n", "Умножение");
	  printf("11. %s\n", "Частное от деления");
	  printf("12. %s\n", "Остаток от деления");
	  printf("13. %s\n", "Возврат в меню");
	  return enterIntNumInterval(1, 13);
  }

int menuInteger(struct INTEGER* ints, struct NATURAL* nats)
{
	int tMin = 0, tMax = 150;
	int item;
	char ch;
	struct INTEGER Ai, Bi, Ci;
	struct NATURAL An, Bn, Cn;
	do
	{
		switch (item = menuItemInteger())
		{
		case 1:
			ints[0] = ENINT();
			ints[1] = ENINT();
			break;
		case 2:
			for (short int i = 0; i < COUNT_NUMBERS; ++i)
				if (ints[i].natural_part.index>0)
				{
					printf("Число %c:", (65 + i));
					output_Z(ints[i]);
					printf("\n");
				}
				else
					printf("Целое число %c отсутствует\n", (65 + i));
			break;
			
		case 3:
			ch = enterCharInterval('A', 'C', "Выберите число для изменения его на модуль (A, B или C): ");
			ABS_Z_N(ints[ch-65]);
			break;

		case 4:
			ch = enterCharInterval('A', 'C', "Выберите число для добавления единицы (A, B или C): ");
			if (POZ_Z_D(ints[ch-65]) == 1)
				printf("Число %c положительное", ch);
			else
				if (POZ_Z_D(ints[ch - 65]) == 2)
					printf("Число %c отицательное", ch);
				else
					printf("Число %c равно 0", ch);
			break;

		case 5:
			ch = enterCharInterval('A', 'C', "Выберите число для изменения знака (A, B или C): ");
			ints[ch-65].sign = (ints[ch - 65].sign) ? 0 : 1;
			break;

		case 6:
			ch = enterCharInterval('A', 'C', "Выберите число для преобразования (Ai=An, Bi=Bn или Ci=Cn): ");
			ints[ch - 65] = TRANS_N_Z(nats[ch - 65]);
			break;

		case 7:
			ch = enterCharInterval('A', 'C', "Выберите число для преобразования (An=Ai, Bn=Bi или Cn=Ci): ");
			nats[ch - 65] = TRANS_Z_N(ints[ch - 65]);
			break;

		case 8:
			ints[2] = ADD_ZZ_Z(ints[0], ints[1]);
			break;

		case 9:
			ints[2] = SUB_ZZ_Z(ints[0], ints[1]);
			break;

		case 10:
			ints[2] = MUL_ZZ_Z(ints[0], ints[1]);
			break;

		case 11:
			ints[2] = DIV_ZZ_Z(ints[0], ints[1].natural_part);
			break;

		case 12:
			ints[2] = MOD_ZZ_Z(ints[0], ints[1].natural_part);
			break;
		}
		system("pause");
		system("cls");
		printf("Операция успешно завершена!\n");
		system("pause");
	} while (item != 12);
	return 0;
}