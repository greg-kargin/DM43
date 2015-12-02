#include "inputs.h"

struct NATURAL ENNAT()
  {
  struct NATURAL input;
  input.index = 0;
  input.number = NULL;
  char *ch;
  ch = (char*) malloc(2 * sizeof(char));
  ch[1] = '\0';
  do
    {
    ch[0] = getchar();
    if (ch[0] == '0' && input.index == 0)
      {
      printf("Число не может начинаться с 0!\nПовторите ввод:");
      fflush(stdin);
      }
    else
    if (atoi(ch))
      {
      ++input.index;
      input.number = (int*) realloc(input.number, input.index*sizeof(int));
      input.number[input.index - 1] = atoi(ch);
      }
    else
    if (ch[0] != '\n')
      {
      printf("В строку попали посторонние символы!\nПовторите ввод:");
      free(input.number);
      input.number = NULL;
      input.index = 0;
      fflush(stdin);
      }
    }
    while (ch[0] != '\n');
    return input;
  }
