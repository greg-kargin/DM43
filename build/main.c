#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "main.h"

int main(int argc, char* argv[])
{
	int tMin = 0, tMax = 150;
	setlocale(LC_ALL, "RUS");
	struct NATURAL An, Bn, Cn;
	An.index = 0;
	Bn.index = 0;
	Cn.index = 0;
	struct INTEGER Ai, Bi, Ci;
	struct RATIONAL Ar, Br, Cr;
	struct POLYNOMIAL Ap, Bp, Cp;

	char ch = 0;

	bool repeat = true;

	while (repeat)
	{
		system("cls");

		/* Main menu */
		printf("1. %s\n", "Действия с натуральными числами");
		printf("2. %s\n", "Действия с целыми числами");
		printf("3. %s\n", "Действия с рациональными числами");
		printf("4. %s\n", "Действия с многочленами");
		printf("5. %s\n", "Выход из программы");

		_uint16 menu_item = enterIntNum(1, 5);

		system("cls");
		int item = -1;

		switch (menu_item)
		{
		case MENU_NATURAL:
			do
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
				item = enterIntNum(1, 17);
				switch (item)
				{
				case 1:
					printf("Введите натуральное число A (>0):");
					An = ENNAT();
					printf("Введите натуральное число B (>0):");
					Bn = ENNAT();
					break;

				case 2:
					if (An.index > 0)
					{
						printf("Число А:");
						output_N(An);
						printf("\n");
					}
					else
						printf("Натуральное число A отсутствует\n");
					if (Bn.index > 0)
					{
						printf("Число B:");
						output_N(An);
						printf("\n");
					}
					else
						printf("Натуральное число B отсутствует\n");
					if (Cn.index > 0)
					{
						printf("Число C:");
						output_N(An);
						printf("\n");
					}
					else
						printf("Натуральное число C отсутствует\n");
					break;

				case 3:
					if (COM_NN_D(An, Bn) == 2)
						printf("Число A больше числа B(A>B)");
					else
						if (COM_NN_D(An, Bn) == 1)
							printf("Число B больше числа A(B>A)");
						else
							printf("Число A равно числу B (A=B)");
					printf("\n");
					break;

				case 4:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите проверяемое число (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						printf("Число А %sравно нулю", (NZER_N_B(An)) ? "" : "не ");
						break;

					case 'B':
						printf("Число B %sравно нулю", (NZER_N_B(Bn)) ? "" : "не ");
						break;

					case 'C':
						printf("Число C %sравно нулю", (NZER_N_B(Cn)) ? "" : "не ");
						break;
					}
					break;

				case 5:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для добавления единицы (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						An = ADD_1N_N(An);
						break;

					case 'B':
						Bn = ADD_1N_N(Bn);
						break;

					case 'C':
						Cn = ADD_1N_N(Cn);
						break;
					}
				case 6:
					Cn = ADD_NN_N(An, Bn);
					break;

				case 7:
					Cn = SUB_NN_N(An, Bn);
					break;

				case 8:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для умножения (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
					switch (ch)
					{
					case 'A':
						Cn = MUL_ND_N(An, enterIntNum(tMin, tMax));
						break;

					case 'B':
						Cn = MUL_ND_N(Bn, enterIntNum(tMin, tMax));
						break;

					case 'C':
						Cn = MUL_ND_N(Cn, enterIntNum(tMin, tMax));
						break;
					}
					break;

				case 9:
					printf("Введите число k (от %d, до %d) ", tMin, tMax);
					Cn = MUL_Nk_N(An, enterIntNum(tMin, tMax));
					break;

				case 10:
					Cn = MUL_NN_N(An, Bn);
					break;

				case 11:
					printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
					Cn = SUB_NDN_N(An, Bn, enterIntNum(tMin, tMax));
					break;

					printf("14. %s\n", "Остаток от деления");
				case 12:
					Cn = DIV_NN_Dk(An, Bn);
					break;

				case 13:
					Cn = DIV_NN_N(An, Bn);
					break;

				case 14:
					Cn = MOD_NN_N(An, Bn);
					break;

				case 15:
					Cn = GCF_NN_N(An, Bn);
					break;

				case 16:
					Cn = LCM_NN_N(An, Bn);
					break;
				}
				system("pause");
				system("cls");
				printf("Операция успешно завершена!\n");
				system("pause");
			} while (item != 17);
			break;

		case MENU_INTEGER:
			do
			{
				printf("1. %s\n", "Ввод целых чисел");
				printf("2. %s\n", "Абсолютная величина числа");
				printf("3. %s\n", "Определение положительности числа");
				printf("4. %s\n", "Изменение знака");
				printf("5. %s\n", "Преобразование натурального в целое");
				printf("6. %s\n", "Преобразование целого неотрицательного в натуральное");
				printf("7. %s\n", "Сложение");
				printf("8. %s\n", "Вычитание");
				printf("9. %s\n", "Умножение");
				printf("10. %s\n", "Частное от деления");
				printf("11. %s\n", "Остаток от деления");
				printf("12. %s\n", "Возврат в меню");

				item = enterIntNum(1, 17);

				switch (item)
				{
				case 1:
					Ai = ENINT();
					Bi = ENINT();
					break;

				case 2:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для изменения его на модуль (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						ABS_Z_N(Ai);
						break;

					case 'B':
						ABS_Z_N(Bi);
						break;

					case 'C':
						ABS_Z_N(Ci);
						break;
					}
					break;

				case 3:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для добавления единицы (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						if (POZ_Z_D(Ai) == 1)
							printf("Число А положительное");
						else
							if (POZ_Z_D(Ai) == 2)
								printf("Число А отицательное");
							else
								printf("Число А равно 0");
						break;

					case 'B':
						if (POZ_Z_D(Bi) == 1)
							printf("Число B положительное");
						else
							if (POZ_Z_D(Bi) == 2)
								printf("Число B отицательное");
							else
								printf("Число B равно 0");
						break;

					case 'C':
						if (POZ_Z_D(Ci) == 1)
							printf("Число C положительное");
						else
							if (POZ_Z_D(Ci) == 2)
								printf("Число C отицательное");
							else
								printf("Число C равно 0");
						break;
					}
					break;

				case 4:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для изменения знака (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						Ai.sign = (Ai.sign) ? 0 : 1;
						break;

					case 'B':
						Bi.sign = (Bi.sign) ? 0 : 1;
						break;

					case 'C':
						Ci.sign = (Ci.sign) ? 0 : 1;
						break;
					}
					break;

				case 5:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для преобразования (Ai=An, Bi=Bn или Ci=Cn): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						Ai = TRANS_N_Z(An);
						break;

					case 'B':
						Bi = TRANS_N_Z(Bn);
						break;

					case 'C':
						Ci = TRANS_N_Z(Cn);
						break;
					}
					break;

				case 6:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для преобразования (An=Ai, Bn=Bi или Cn=Ci): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						An = TRANS_Z_N(Ai);
						break;

					case 'B':
						Bn = TRANS_Z_N(Bi);
						break;

					case 'C':
						Cn = TRANS_Z_N(Ci);
						break;
					}
					break;

				case 7:
					Ci = ADD_ZZ_Z(Ai, Bi);
					break;

				case 8:
					Ci = SUB_ZZ_Z(Ai, Bi);
					break;

				case 9:
					Ci = MUL_ZZ_Z(Ai, Bi);
					break;

				case 10:
					Ci = DIV_ZZ_Z(Ai, Bi.natural_part);
					break;

				case 11:
					Ci = MOD_ZZ_Z(Ai, Bi.natural_part);
					break;
				}
				system("pause");
				system("cls");
				printf("Операция успешно завершена!\n");
				system("pause");
			} while (item != 12);
			break;

		case MENU_RATIONAL:
			do
			{
				printf("1. %s\n", "Ввод рациональных чисел");
				printf("2. %s\n", "Сокращение дроби");
				printf("3. %s\n", "Проверка на целое");
				printf("4. %s\n", "Преообразование целого в дробное");
				printf("5. %s\n", "Преобразование дробного в целое");
				printf("6. %s\n", "Сложение");
				printf("7. %s\n", "Вычитание");
				printf("8. %s\n", "Умножение");
				printf("9. %s\n", "Деление");
				printf("10. %s\n", "Возврат в меню");
				item = enterIntNum(1, 10);

				switch (item)
				{
				case 1:
					Ar = ENRAT();
					Br = ENRAT();
					break;

				case 2:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для сокращения (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						Ar = RED_Q_Q(Ar);
						break;

					case 'B':
						Br = RED_Q_Q(Br);
						break;

					case 'C':
						Cr = RED_Q_Q(Cr);
						break;
					}
					break;

				case 3:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для проверки на целое (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						if (INT_Q_Z(Ar))
							printf("Число А целое");
						else
							printf("Число A дробное");
						break;

					case 'B':
						if (INT_Q_Z(Br))
							printf("Число B целое");
						else
							printf("Число B дробное");
						break;

					case 'C':
						if (INT_Q_Z(Cr))
							printf("Число C целое");
						else
							printf("Число C дробное");
						break;
					}
					break;

				case 4:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для проверки на целое (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						Ar=TRAN_Z_Q(Ai);
						break;

					case 'B':
						Br = TRAN_Z_Q(Bi);
						break;

					case 'C':
						Cr = TRAN_Z_Q(Ci);
						break;
					}
					break;

				case 5:
					ch = 0;
					while (ch < 'A' || ch > 'C')
					{
						printf("Выберите число для проверки на целое (A, B или C): ");
						scanf("%c", &ch);
						if (ch < 'A' || ch > 'C')
							printf("Неверный ввод!\n");
					}
					switch (ch)
					{
					case 'A':
						Ai = TRAN_Q_Z(Ar);
						break;

					case 'B':
						Bi = TRAN_Q_Z(Br);
						break;

					case 'C':
						Ci = TRAN_Q_Z(Cr);
						break;
					}
					break;

				case 6:
					Cr = ADD_QQ_Q(Ar, Br);
					break;

				case 7:
					Cr = SUB_QQ_Q(Ar, Br);
					break;

				case 8:
					Cr = MUL_QQ_Q(Ar, Br);
					break;

				case 9:
					Cr = DIV_QQ_Q(Ar, Br);
					break;
				}
				system("pause");
				system("cls");
				printf("Операция успешно завершена!\n");
				system("pause");
			} while (item != 10);
			break;

			case MENU_POLYNOMS:
			do
			{
			printf ("0. %s\n", "Ввод полиномов");
			printf ("1. %s\n", "Сложение многочленов");
			printf ("2. %s\n", "Вычитание многочленов");
			printf ("3. %s\n", "Умножение многочлена на рациональное число");
			printf ("4. %s\n", "Умножение многочлена на x^k");
			printf ("5. %s\n", "Старший коэффициент многочлена");
			printf ("6. %s\n", "Степень многочлена");
			printf ("7. %s\n", "Вынесение из многочлена НОК знаменателей коэффициентов\n    и НОД числителей");
			printf ("8. %s\n", "Умножение многочленов");
			printf ("9. %s\n", "Частное от деления многочленов");
			printf ("10. %s\n", "Остаток от деления многочленов");
			printf ("11. %s\n", "НОД многочленов");
			printf ("12. %s\n", "Производная многочлена");
			printf ("13. %s\n", "Преобразование многочлена - кратные корни в простые");
			printf ("14. %s\n", "Возврат в меню");
			  item = enterIntNum(1, 15);

			  switch (item)
				{
				  case 0:
				  Ap=ENPOL();
				  Bp=ENPOL();
				  break;
				case 1:
				break;

				case 2:
				break;

				case 3:
				Ap = MUL_P_Q(Ap);
				break;

				case 4:
				ch = 0;
				while (ch < '0' || ch > '9')
				{
				printf ("Введите k: ");
				scanf ("%c", &ch);
				if (ch < '0' || ch > '9')
				printf ("Неверный ввод!\n");
				}
				Ap = MUL_Pxk_P(Ap, (int)(ch - 48));
				break;

				case 5:
				Cr = LED_P_Z(Ap);
				break;

				case 6:
				printf ("Степень многочлена А: %d", DEG_P_N(Ap));
				break;

				case 7:
				break;

				case 8:
				Cp = MUL_PP_P (Ap, Bp);
				break;

				case 9:
				break;

				case 10:
				break;

				case 11:
				break;

				case 12:
				break;

				case 13:
				break;

				case 14:
				break;
				}
				}while(item!=15);
			break;
		case MENU_EXIT:
			repeat = 0;
			break;
		}
	}
	printf("Нажмите любую клавишу для выхода из программы");
	return 0;
}
