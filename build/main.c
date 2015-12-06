#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "main.h"
#include "conio.h"

int enterNum(int first, int last)
{
	int num;
	bool check_num, check_all;
	char str[5];
	const char numbers[] = "0123456789";
	do
	{
		check_all = true;
		check_num = false;
		scanf("%s", &str);
		fflush(stdin);
		for (int i = 0; str[i] != '\0' && check_all; ++i)
		{
			for (int j = 0; numbers[j] != '\0' && !check_num; ++j)
				if (str[i] == numbers[j] || str[i] == '\0')
					check_num = true;
			if (check_num)
				check_num = false;
			else
				check_all = false;
		}
		if (check_all)
			num = atoi(str);
		else
		{
		printf("В строку попало что-то кроме числа, повторите ввод:\n");
		}
		if ((num < first || num > last) && check_all)
			printf("Скорее всего вы ошиблись при вводе\nВведите число от %d до %d\nПовторите ввод: ", first, last);
	} while (num < first || num > last || !check_all);
	return num;
}

int main(int argc, char* argv[])
{
	int tMin=0, tMax=150;
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

		_uint16 menu_item = enterNum(1,5);

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
			item = enterNum(1, 17);
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
				if (ch = 'A')
					An = ADD_1N_N(An);
				else
					if (ch = 'B')
						Bn = ADD_1N_N(Bn);
					else
						Cn = ADD_1N_N(Cn);
				break;

			case 6:
				Cn = ADD_NN_N(An, Bn);
				break;

			case 7:
				Cn = SUB_NN_N(An, Bn);
				break;

			case 8:
				while (ch < 'A' || ch > 'C')
				{
					printf("Выберите число для умножения (A, B или C): ");
					scanf("%c", &ch);
					if (ch < 'A' || ch > 'C')
						printf("Неверный ввод!\n");
				}
				printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
				Cn = MUL_ND_N(An, enterNum(tMin, tMax));
				break;

			case 9:
				printf("Введите число k (от %d, до %d) ", tMin, tMax);
				Cn = MUL_Nk_N(An, enterNum(tMin, tMax));
				break;

			case 10:
				Cn = MUL_NN_N(An, Bn);
				break;

			case 11:
				printf("Введите число на которое надо умножить (от %d, до %d) ", tMin, tMax);
				Cn = SUB_NDN_N(An, Bn, enterNum(tMin, tMax));
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
			}while (item != 17);
			break;
			/*
			case MENU_INTEGER:
			  printf ("0. %s\n", "Р’РІРѕРґ С†РµР»С‹С… С‡РёСЃРµР»");
			  printf ("1. %s\n", "РђР±СЃРѕР»СЋС‚РЅР°СЏ РІРµР»РёС‡РёРЅР° С‡РёСЃР»Р°");
			  printf ("2. %s\n", "РћРїСЂРµРґРµР»РµРЅРёРµ РїРѕР»РѕР¶РёС‚РµР»СЊРЅРѕСЃС‚Рё С‡РёСЃР»Р°");
			  printf ("3. %s\n", "РЈРјРЅРѕР¶РµРЅРёРµ С‡РёСЃР»Р° РЅР° -1");
			  printf ("4. %s\n", "РџСЂРµРѕР±СЂР°Р·РѕРІР°РЅРёРµ РЅР°С‚СѓСЂР°Р»СЊРЅРѕРіРѕ РІ С†РµР»РѕРµ");
			  printf ("5. %s\n", "РџСЂРµРѕР±СЂР°Р·РѕРІР°РЅРёРµ С†РµР»РѕРіРѕ РЅРµРѕС‚СЂРёС†Р°С‚РµР»СЊРЅРѕРіРѕ РІ РЅР°С‚СѓСЂР°Р»СЊРЅРѕРµ");
			  printf ("6. %s\n", "РЎР»РѕР¶РµРЅРёРµ");
			  printf ("7. %s\n", "Р’С‹С‡РёС‚Р°РЅРёРµ");
			  printf ("8. %s\n", "РЈРјРЅРѕР¶РµРЅРёРµ");
			  printf ("9. %s\n", "Р§Р°СЃС‚РЅРѕРµ РѕС‚ РґРµР»РµРЅРёСЏ");
			  printf ("10. %s\n", "РћСЃС‚Р°С‚РѕРє РѕС‚ РґРµР»РµРЅРёСЏ");
			  printf ("11. %s\n", "Р’РѕР·РІСЂР°С‚ РІ РјРµРЅСЋ");
			  item = -1;
			  while (item < 0 || item > 15)
				{
				printf ("15. %s\n", "Р’РѕР·РІСЂР°С‚ РІ РјРµРЅСЋ");
				scanf ("%d", &item);
				if (item < 0 || item > 15)
				  printf ("РќРµРІРµСЂРЅС‹Р№ РІРІРѕРґ!\n")
				}

			  switch (item)
				{
				  case 0:
				  Ai=ENINT();
				  Bi=ENINT();
				  break;
				case 1:
				break;

				case 2:
				break;

				case 3:
				break;

				case 4:
				break;

				case 5:
				Cn = TRANS_Z_N(Ci);
				break;

				case 6:
				Ci = ADD_ZZ_Z (Ai, Bi);
				break;

				case 7:
				Ci = SUB_ZZ_Z (Ai, Bi);
				break;

				case 8:
				Ci = MUL_ZZ_Z (Ai, Bi);
				break;

				case 9:
				Ci = DIV_ZZ_Z (Ai, Bi);
				break;

				case 10:
				Ci = MOD_ZZ_Z (Ai, Bi);
				break;

				case 11:
				break;
				}
			break;

			case MENU_RATIONAL:
			printf ("0. %s\n", "Р’РІРѕРґ СЂР°С†РёРѕРЅР°Р»СЊРЅС‹С… С‡РёСЃРµР»");
			  printf ("1. %s\n", "РЎРѕРєСЂР°С‰РµРЅРёРµ РґСЂРѕР±Рё");
			  printf ("2. %s\n", "РџСЂРѕРІРµСЂРєР° РЅР° С†РµР»РѕРµ");
			  printf ("3. %s\n", "РџСЂРµРѕРѕР±СЂР°Р·РѕРІР°РЅРёРµ С†РµР»РѕРіРѕ РІ РґСЂРѕР±РЅРѕРµ");
			  printf ("4. %s\n", "РџСЂРµРѕР±СЂР°Р·РѕРІР°РЅРёРµ РґСЂРѕР±РЅРѕРіРѕ РІ С†РµР»РѕРµ");
			  printf ("5. %s\n", "РЎР»РѕР¶РµРЅРёРµ");
			  printf ("6. %s\n", "Р’С‹С‡РёС‚Р°РЅРёРµ");
			  printf ("7. %s\n", "РЈРјРЅРѕР¶РµРЅРёРµ");
			  printf ("8. %s\n", "Р”РµР»РµРЅРёРµ");
			  printf ("9. %s\n", "Р’РѕР·РІСЂР°С‚ РІ РјРµРЅСЋ");
			  item = -1;
			  while (item < 0 || item > 15)
				{
				printf ("15. %s\n", "Р’РѕР·РІСЂР°С‚ РІ РјРµРЅСЋ");
				fflush(stdin);
				scanf ("%d", &item);
				if (item < 0 || item > 15)
				  printf("РќРµРІРµСЂРЅС‹Р№ РІРІРѕРґ!\n");
				}

			  switch (item)
				{
				  case 0:
				  Ar=ENRAT();
				  Br=ENRAT();
				  break;
				case 1:
				Ar = RED_Q_Q(Ar);
				break;

				case 2:
				break;

				case 3:
				break;

				case 4:
				break;

				case 5:
				break;

				case 6:
				break;

				case 7:
				Cr = MUL_QQ_Q(Ar, Br);
				break;

				case 8:
				Cr = DIV_QQ_Q(Ar, Br);
				break;

				case 9:
				break;
				}
			break;

			case MENU_POLYNOMS:
			printf ("0. %s\n", "Р’РІРѕРґ РїРѕР»РёРЅРѕРјРѕРІ");
			  printf ("1. %s\n", "РЎР»РѕР¶РµРЅРёРµ РјРЅРѕРіРѕС‡Р»РµРЅРѕРІ");
			  printf ("2. %s\n", "Р’С‹С‡РёС‚Р°РЅРёРµ РјРЅРѕРіРѕС‡Р»РµРЅРѕРІ");
			  printf ("3. %s\n", "РЈРјРЅРѕР¶РµРЅРёРµ РјРЅРѕРіРѕС‡Р»РµРЅР° РЅР° СЂР°С†РёРѕРЅР°Р»СЊРЅРѕРµ С‡РёСЃР»Рѕ");
			  printf ("4. %s\n", "РЈРјРЅРѕР¶РµРЅРёРµ РјРЅРѕРіРѕС‡Р»РµРЅР° РЅР° x^k");
			  printf ("5. %s\n", "РЎС‚Р°СЂС€РёР№ РєРѕСЌС„С„РёС†РёРµРЅС‚ РјРЅРѕРіРѕС‡Р»РµРЅР°");
			  printf ("6. %s\n", "РЎС‚РµРїРµРЅСЊ РјРЅРѕРіРѕС‡Р»РµРЅР°");
			  printf ("7. %s\n", "Р’С‹РЅРµСЃРµРЅРёРµ РёР· РјРЅРѕРіРѕС‡Р»РµРЅР° РќРћРљ Р·РЅР°РјРµРЅР°С‚РµР»РµР№ РєРѕСЌС„С„РёС†РёРµРЅС‚РѕРІ \
								  Рё РќРћР” С‡РёСЃР»РёС‚РµР»РµР№");
			  printf ("8. %s\n", "РЈРјРЅРѕР¶РµРЅРёРµ РјРЅРѕРіРѕС‡Р»РµРЅРѕРІ");
			  printf ("9. %s\n", "Р§Р°СЃС‚РЅРѕРµ РѕС‚ РґРµР»РµРЅРёСЏ РјРЅРѕРіРѕС‡Р»РµРЅРѕРІ");
			  printf ("10. %s\n", "РћСЃС‚Р°С‚РѕРє РѕС‚ РґРµР»РµРЅРёСЏ РјРЅРѕРіРѕС‡Р»РµРЅРѕРІ");
			  printf ("11. %s\n", "РќРћР” РјРЅРѕРіРѕС‡Р»РµРЅРѕРІ");
			  printf ("12. %s\n", "РџСЂРѕРёР·РІРѕРґРЅР°СЏ РјРЅРѕРіРѕС‡Р»РµРЅР°");
			  printf ("13. %s\n", "РџСЂРµРѕР±СЂР°Р·РѕРІР°РЅРёРµ РјРЅРѕРіРѕС‡Р»РµРЅР° - РєСЂР°С‚РЅС‹Рµ РєРѕСЂРЅРё РІ РїСЂРѕСЃС‚С‹Рµ");
			  printf ("14. %s\n", "Р’РѕР·РІСЂР°С‚ РІ РјРµРЅСЋ");
			  item = -1;
			  while (item < 0 || item > 15)
				{
				printf ("15. %s\n", "Р’РѕР·РІСЂР°С‚ РІ РјРµРЅСЋ");
				scanf ("%d", &item);
				if (item < 0 || item > 15)
				  printf ("РќРµРІРµСЂРЅС‹Р№ РІРІРѕРґ!\n")
				}

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
				  printf ("Р’РІРµРґРёС‚Рµ k: ");
				  scanf ("%c", &ch);
				  if (ch < '0' || ch > '9')
					printf ("РќРµРІРµСЂРЅС‹Р№ РІРІРѕРґ!\n");
				  }
				Ap = MUL_Pxk_P(Ap, (int)(ch - 48));
				break;

				case 5:
				Cr = LED_P_Z(Ap);
				break;

				case 6:
				printf ("РЎС‚РµРїРµРЅСЊ РјРЅРѕРіРѕС‡Р»РµРЅР° Рђ: %d", DEG_P_N(Ap));
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
			break;
			*/
		case MENU_EXIT:
			repeat = 0;
			break;
		}
	}
	printf("Нажмите любую клавишу для выхода из программы");
	return 0;
}
