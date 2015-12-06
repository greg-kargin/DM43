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
	  input.index = 5;
	  input.number = (int*)malloc(input.index*sizeof(int));
	  for (int i = 0; i < input.index; ++i)
		  input.number[i] = i+1;
    return input;
  }
