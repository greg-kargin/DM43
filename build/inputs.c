#include "main.h"
struct NATURAL ENNAT()
  {
  struct NATURAL input;
  /*input.index = 0;
  input.number = NULL;
  char ch;
  ch = '\0';
  do
    {
    //ch = getchar();
    fflush(stdin);
	scanf_s("%c", &ch);
    if (ch == '0' && input.index == 0)
      {
      printf("Число не может начинаться с 0!\nПовторите ввод:");
      fflush(stdin);
      }
    else
    if (ch>47 && ch<58)
      {
      ++input.index;
      input.number = (int*) realloc(input.number, input.index*sizeof(int));
      input.number[input.index - 1] = ch-48;
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
    }
    while (ch != '\n');*/
  /*
  printf("Введите количество цифр в числе от 1 до 30");
  input.index=enterIntNum(1,30);
  for(int i=0; i<input.index; ++i)
	input.number[i]=getchar()-48;
  */
	  input.index = 5;
	  input.number = (int*)malloc(input.index*sizeof(int));
	  for (int i = 0; i < input.index; ++i)
		  input.number[i] = i+1;
    return input;
  }

struct INTEGER ENINT()
{
	struct INTEGER input;
	printf("Введите знак числа 0 знак '+', 1 знак '-'");
	input.sign = enterIntNum(0, 1);
	input.natural_part = ENNAT();
	return input;
}

struct RATIONAL ENRAT()
{
	struct RATIONAL input;
	printf("Введите знак числа 0 знак '+', 1 знак '-'");
	input.sign = enterIntNum(0, 1);
	input.numerator = ENNAT();
	input.denominator = ENNAT();
	return input;
}

int enterIntNum(int first, int last)
{
	int num;
	short int check_num, check_all;
	char str[5];
	const char numbers[] = "0123456789";
	do
	{
		check_all = 1;
		check_num = 0;
		scanf_s("%s", &str);
		fflush(stdin);
		for (int i = 0; str[i] != '\0' && check_all; ++i)
		{
			for (int j = 0; numbers[j] != '\0' && !check_num; ++j)
				if (str[i] == numbers[j] || str[i] == '\0')
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