#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "main.h"
#include "natural.h"
#include "integer.h"
#include "rational.h"
#include "polynom.h"

int main(int argc, char* argv[])
  {
  bool repeat = true;

  while ( repeat )
    {
    system("cls");
    setlocale (LC_ALL, ".1251");

    /* Main menu */
    printf ("1. %s\n", "Действия с натуральными числами");
    printf ("2. %s\n", "Действия с целыми числами");
    printf ("3. %s\n", "Действия с рациональными числами");
    printf ("4. %s\n", "Действия с многочленами");
    printf ("5. %s\n", "Выход из программы");

    _uint16 menu_item = 0;
    while ( (menu_item < 1) || (menu_item > MENU_EXIT) )
      {
      printf ("%s", "Выберите пункт меню: ");
      scanf ("%d", &menu_item);

      if ( (menu_item < 1) || (menu_item > MENU_EXIT) )
        printf ("%s\n", "Неверный ввод!");
      }

    system ("cls");

    switch (menu_item)
      {
      case MENU_NATURAL:
        menuNatural();
      break;

      case MENU_INTEGER:
        menuInteger();
      break;

      case MENU_RATIONAL:
        menuRational();
      break;

      case MENU_POLYNOMS:
        menuPolynom();
      break;

      case MENU_EXIT:
        repeat = 0;
      break;
      }
    }
  printf ("Нажмите любую клавишу для выхода из программы");

  return 0;
  }
