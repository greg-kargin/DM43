#define _CRT_SECURE_NO_WARNINGS
#include "main.h"

struct NATURAL ENNAT()
{
	struct NATURAL input, reverse;
	input.index = 0;
	input.number = NULL;
	int i = 0, b=1;
	char ch;
	ch = '\0';
	getchar();
	do
	{
		ch = getchar();
		if (ch == '\n' && input.index)
			b = 0;
		if (ch == '0' && input.index == 0 && b)
		{
			//printf("Число не может начинаться с 0!\nПовторите ввод:"); //пока не работает
			fflush(stdin);
		}
		else
			if (ch > 47 && ch < 58)
			{
				++input.index;
				input.number = (int*)realloc(input.number, input.index*sizeof(int));
				input.number[input.index - 1] = ch - 48;
			}
			else
				if (ch != '\n')
				{
					printf("В строку попали посторонние символы!\nПовторите ввод:");
					free(input.number);
					input.number = NULL;
					input.index = 0;
					fflush(stdin);
				}
	} while (b);
	/*input.index = 5;
	input.number = (int*)malloc(input.index*sizeof(int));
	for (int i = 0; i < input.index; ++i)
		input.number[i] = i + 1;*/
	reverse.index = input.index;
	reverse.number = (int*)malloc(reverse.index*sizeof(int));
	for (int i = 0; i < reverse.index; ++i)
		reverse.number[i] = input.number[input.index - 1 - i];
	return reverse;
}

struct INTEGER ENINT()
{
	struct INTEGER input;
	printf("Введите знак числа 0 знак '+', 1 знак '-': ");
	input.sign = enterIntNumInterval(0, 1);
	input.natural_part = ENNAT();
	return input;
}

struct RATIONAL ENRAT()
{
	struct RATIONAL input;
	printf("Введите знак числа 0 знак '+', 1 знак '-': ");
	input.sign = enterIntNumInterval(0, 1);
	input.numerator = ENNAT();
	input.denominator = ENNAT();
	return input;
}

struct POLYNOMIAL ENPOL()
{
	struct POLYNOMIAL input;
	input.degree = 5;
	input.factors = (struct RATIONAL*)malloc(input.degree*sizeof(struct RATIONAL));
	for (int i = 0; i < input.degree; ++i)
		input.factors[i] = ENRAT();
	return input;
}
char enterCharInterval(char first, char last, char* str)
{
	char ch = 0;
	ch = getchar();
	do
	{
		printf("%s", str);
		ch = getchar();
		if (ch < first || ch > last)
		{
			printf("Неверный ввод!\n");
			fflush(stdin);
		}
	} while (ch < first || ch > last);
	return ch;
}

int enterIntNumInterval(int first, int last)
{
	int num;
	short int check_num, check_all;
	char str[5];
	do
	{
		check_all = 1;
		check_num = 0;
		scanf("%s", &str);
		fflush(stdin);
		for (int i = 0; str[i] != '\0' && check_all; ++i)
		{
			if (str[i] > (int)'0' - 1 && str[i] < (int)'9' + 1)
				check_num = 1;
			if (check_num)
				check_num = 0;
			else
				check_all = 0;
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