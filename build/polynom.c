#include "polynom.h"
#include "inputs.h"

int menuItemPolynom()
  {
	  printf("1. %s\n", "Ввод полиномов");
	  printf("2. %s\n", "Вывод рациональных чисел");
	  printf("3. %s\n", "Сложение многочленов");
	  printf("4. %s\n", "Вычитание многочленов");
	  printf("5. %s\n", "Умножение многочлена на рациональное число");
	  printf("6. %s\n", "Умножение многочлена на x^k");
	  printf("7. %s\n", "Старший коэффициент многочлена");
	  printf("8. %s\n", "Степень многочлена");
	  printf("9. %s\n", "Вынесение из многочлена НОК знаменателей коэффициентов\n    и НОД числителей");
	  printf("10. %s\n", "Умножение многочленов");
	  printf("11. %s\n", "Частное от деления многочленов");
	  printf("12. %s\n", "Остаток от деления многочленов");
	  printf("13. %s\n", "НОД многочленов");
	  printf("14. %s\n", "Производная многочлена");
	  printf("15. %s\n", "Преобразование многочлена - кратные корни в простые");
	  printf("16. %s\n", "Возврат в меню");
	  return enterIntNumInterval(1, 16);
  }

int menuPolynomial(struct POLYNOMIAL* pols)
{
	int tMin = 0, tMax = 150;
	int item;
	char ch;
	do
	{
		switch (item = menuItemPolynom())
		{
		case 1:
			pols[0] = ENPOL();
			pols[1] = ENPOL();
			break;

		case 2:
			for (short int i = 0; i < COUNT_NUMBERS; ++i)
				if (pols[i].degree>0)
				{
					printf("Полином %c:", (65 + i));
					output_P(pols[i]);
					printf("\n");
				}
				else
					printf("Полином %c отсутствует\n", (65 + i));
			break;
			
		case 3:
			pols[2] = ADD_PP_P(pols[0], pols[1]);
			break;

		case 4:
			pols[2] = SUB_PP_P(pols[0], pols[1]);
			break;

		case 5:
			//pols[2] = MUL_P_Q(pols[0], pols[1]);
			break;

		case 6:
			ch = enterCharInterval('A', 'C', "Выберите число для умножения на x^k (A, B или C): ");
			printf("Введите k от 0 до 9: ");
			pols[ch - 65] = MUL_Pxk_P(pols[ch - 65], enterIntNumInterval(0, 9));
			break;

		case 7:
			ch = enterCharInterval('A', 'C', "Выберите число для вывода старшего коэффициента (A, B или C): ");
			printf("Старший коэфициент многочлена А: %d", LED_P_Z(pols[ch-65]));
			break;

		case 8:
			ch = enterCharInterval('A', 'C', "Выберите число для вывода степени (A, B или C): ");
			printf("Степень многочлена А: %d", DEG_P_N(pols[ch-65]));
			break;

		case 9:
			ch = enterCharInterval('A', 'B', "Выберите число (A, B или C): ");
			pols[ch - 65] = FAC_P_PQ(pols[ch - 65]);
			break;

		case 10:
			pols[2] = MUL_PP_P(pols[0], pols[1]);
			break;

		case 11:
			pols[2] = DIV_PP_P(pols[0], pols[1]);
			break;

		case 12:
			pols[2] = MOV_PP_P(pols[0], pols[1]);
			break;

		case 13:
			pols[2] = GCF_PP_P(pols[0], pols[1]);
			break;

		case 14:
			ch = enterCharInterval('A', 'C', "Выберите число для взятия производной (A, B или C): ");
			pols[ch-65] = DER_P_P(pols[ch-65]);
			break;

		case 15:
			ch = enterCharInterval('A', 'C', "Выберите число для преобразование многочлена — кратные корни в простые (A, B или C): ");
			pols[ch - 65] = NMR_P_P(pols[ch - 65]);
			break;
		}
		system("pause");
		system("cls");
		printf("Операция успешно завершена!\n");
		system("pause");
	} while (item != 15);
	return 0;
}