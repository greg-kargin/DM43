#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
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

	short int repeat = 1;

	while (repeat)
	{
		system("cls");

		/* Main menu */
		printf("1. %s\n", "Действия с натуральными числами");
		printf("2. %s\n", "Действия с целыми числами");
		printf("3. %s\n", "Действия с рациональными числами");
		printf("4. %s\n", "Действия с многочленами");
		printf("5. %s\n", "Выход из программы");

		_uint16 menu_item = enterIntNumInterval(1, 5);

		system("cls");
		int item = -1;

		switch (menu_item)
		{
		case MENU_NATURAL:
			do
			{
				switch (item = menuNatural())
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
						output_N(Bn);
						printf("\n");
					}
					else
						printf("Натуральное число B отсутствует\n");
					if (Cn.index > 0)
					{
						printf("Число C:");
						output_N(Cn);
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
					ch = enterCharInterval('A', 'C', "Выберите проверяемое число (A, B или C): ");
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
					ch = enterCharInterval('A', 'C', "Выберите число для добавления единицы (A, B или C): ");
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
					ch = enterCharInterval('A', 'C', "Выберите число для умножения (A, B или C): ");
					printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
					switch (ch)
					{
					case 'A':
						Cn = MUL_ND_N(An, enterIntNumInterval(tMin, tMax));
						break;

					case 'B':
						Cn = MUL_ND_N(Bn, enterIntNumInterval(tMin, tMax));
						break;

					case 'C':
						Cn = MUL_ND_N(Cn, enterIntNumInterval(tMin, tMax));
						break;
					}
					break;

				case 9:
					printf("Введите число k (от %d, до %d) ", tMin, tMax);
					Cn = MUL_Nk_N(An, enterIntNumInterval(tMin, tMax));
					break;

				case 10:
					Cn = MUL_NN_N(An, Bn);
					break;

				case 11:
					printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
					Cn = SUB_NDN_N(An, Bn, enterIntNumInterval(tMin, tMax));
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
				switch (item = menuInteger())
				{
				case 1:
					Ai = ENINT();
					Bi = ENINT();
					break;
				case 2:
					if (Ai.natural_part.index > 0)
					{
						printf("Число А:");
						output_Z(Ai);
						printf("\n");
					}
					else
						printf("Целое число A отсутствует\n");
					if (Bi.natural_part.index > 0)
					{
						printf("Число B:");
						output_Z(Bi);
						printf("\n");
					}
					else
						printf("Целое число B отсутствует\n");
					if (Ci.natural_part.index > 0)
					{
						printf("Число C:");
						output_Z(Ci);
						printf("\n");
					}
					else
						printf("Целое число C отсутствует\n");
					break;
				case 3:
					ch = enterCharInterval('A', 'C', "Выберите число для изменения его на модуль (A, B или C): ");
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

				case 4:
					ch = enterCharInterval('A', 'C', "Выберите число для добавления единицы (A, B или C): ");
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

				case 5:
					ch = enterCharInterval('A', 'C', "Выберите число для изменения знака (A, B или C): ");
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

				case 6:
					ch = enterCharInterval('A', 'C', "Выберите число для преобразования (Ai=An, Bi=Bn или Ci=Cn): ");
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

				case 7:
					ch = enterCharInterval('A', 'C', "Выберите число для преобразования (An=Ai, Bn=Bi или Cn=Ci): ");
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

				case 8:
					Ci = ADD_ZZ_Z(Ai, Bi);
					break;

				case 9:
					Ci = SUB_ZZ_Z(Ai, Bi);
					break;

				case 10:
					Ci = MUL_ZZ_Z(Ai, Bi);
					break;

				case 11:
					Ci = DIV_ZZ_Z(Ai, Bi.natural_part);
					break;

				case 12:
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
				switch (item = menuRational())
				{
				case 1:
					Ar = ENRAT();
					Br = ENRAT();
					break;

				case 2:
					if (Ar.denominator.index > 0)
					{
						printf("Число А:");
						output_Q(Ar);
						printf("\n");
					}
					else
						printf("Рациональное число A отсутствует\n");
					if (Cr.denominator.index > 0)
					{
						printf("Число B:");
						output_Q(Br);
						printf("\n");
					}
					else
						printf("Рациональное число B отсутствует\n");
					if (Cr.denominator.index > 0)
					{
						printf("Число C:");
						output_Q(Cr);
						printf("\n");
					}
					else
						printf("Рациональное число C отсутствует\n");
					break;

				case 3:
					ch = enterCharInterval('A', 'C', "Выберите число для сокращения (A, B или C): ");
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

				case 4:
					ch = enterCharInterval('A', 'C', "Выберите число для проверки на целое (A, B или C): ");
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

				case 5:
					ch = enterCharInterval('A', 'C', "Выберите число для перевода из целого в рациальное (A, B или C): ");
					switch (ch)
					{
					case 'A':
						Ar = TRAN_Z_Q(Ai);
						break;

					case 'B':
						Br = TRAN_Z_Q(Bi);
						break;

					case 'C':
						Cr = TRAN_Z_Q(Ci);
						break;
					}
					break;

				case 6:
					ch = enterCharInterval('A', 'C', "Выберите число для перевода из рациального в целое (A, B или C): ");
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

				case 7:
					Cr = ADD_QQ_Q(Ar, Br);
					break;

				case 8:
					Cr = SUB_QQ_Q(Ar, Br);
					break;

				case 9:
					Cr = MUL_QQ_Q(Ar, Br);
					break;

				case 10:
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
				switch (item = menuPolynom())
				{
				case 1:
					Ap = ENPOL();
					Bp = ENPOL();
					break;
				case 2:
					if (Ap.degree)
					{
						printf("Полином А:");
						output_P(Ap);
						printf("\n");
					}
					else
						printf("Полином A отсутствует\n");
					if (Bp.degree)
					{
						printf("Полином B:");
						output_P(Bp);
						printf("\n");
					}
					else
						printf("Полином B отсутствует\n");
					if (Cp.degree)
					{
						printf("Полином C:");
						output_P(Cp);
						printf("\n");
					}
					else
						printf("Полином C отсутствует\n");
					break;
				case 3:
					Cp = ADD_PP_P(Ap, Bp);
					break;

				case 4:
					Cp = SUB_PP_P(Ap, Bp);
					break;

				case 5:
					Cp = MUL_P_Q(Ap, Br);
					break;

				case 6:
					ch = enterCharInterval('A', 'C', "Выберите число для умножения на x^k (A, B или C): ");
					printf("Введите k от 0 до 9: ");
					switch (ch)
					{
					case 'A':
						Ap = MUL_Pxk_P(Ap, enterIntNumInterval(0, 9));
						break;

					case 'B':
						Bp = MUL_Pxk_P(Bp, enterIntNumInterval(0, 9));
						break;

					case 'C':
						Cp = MUL_Pxk_P(Cp, enterIntNumInterval(0, 9));
						break;
					}
					break;

				case 7:
					ch = enterCharInterval('A', 'C', "Выберите число для вывода старшего коэффициента (A, B или C): ");
					switch (ch)
					{
					case 'A':
						printf("Старший коэфициент многочлена А: %d", DEG_P_N(Ap));
						break;

					case 'B':
						printf("Старший коэфициент многочлена B: %d", DEG_P_N(Cp));
						break;

					case 'C':
						printf("Старший коэфициент многочлена C: %d", DEG_P_N(Cp));
						break;
					}
					break;

				case 8:
					ch = enterCharInterval('A', 'C', "Выберите число для вывода степени (A, B или C): ");
					switch (ch)
					{
					case 'A':
						printf("Степень многочлена А: %d", DEG_P_N(Ap));
						break;

					case 'B':
						printf("Степень многочлена B: %d", DEG_P_N(Bp));
						break;

					case 'C':
						printf("Степень многочлена C: %d", DEG_P_N(Cp));
						break;
					}
					break;

				case 9:
					ch = enterCharInterval('A', 'B', "Выберите число (A, B или C): ");
					switch (ch)
					{
					case 'A':
						Ap = FAC_P_PQ(Ap);
						break;

					case 'B':
						Bp = FAC_P_PQ(Bp);
						break;

					case 'C':
						Cp = FAC_P_PQ(Cp);
						break;
					}
					break;

				case 10:
					Cp = MUL_PP_P(Ap, Bp);
					break;

				case 11:
					Cp = DIV_PP_P(Ap, Bp);
					break;

				case 12:
					Cp = MOV_PP_P(Ap, Bp);
					break;
				case 13:
					Cp = GCF_PP_P(Ap, Bp);
					break;

				case 14:
					ch = enterCharInterval('A', 'C', "Выберите число для взятия производной (A, B или C): ");
					switch (ch)
					{
					case 'A':
						Ap = DER_P_P(Ap);
						break;

					case 'B':
						Bp = DER_P_P(Bp);
						break;

					case 'C':
						Cp = DER_P_P(Cp);
						break;
					}
					break;

				case 15:
					ch = enterCharInterval('A', 'C', "Выберите число для преобразование многочлена — кратные корни в простые (A, B или C): ");
					switch (ch)
					{
					case 'A':
						Ap = NMR_P_P(Ap);
						break;

					case 'B':
						Bp = NMR_P_P(Bp);
						break;

					case 'C':
						Cp = NMR_P_P(Cp);
						break;
					}
					break;
				}
				system("pause");
				system("cls");
				printf("Операция успешно завершена!\n");
				system("pause");
			} while (item != 15);
			break;
		case MENU_EXIT:
			repeat = 0;
			break;
		}
	}
	printf("Нажмите любую клавишу для выхода из программы");
	return 0;
}
