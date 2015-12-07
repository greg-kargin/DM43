#include "integer.h"
#include "inputs.h"

int menuRational()
  {
	  printf("1. %s\n", "Ввод рациональных чисел");
	  printf("2. %s\n", "Вывод рациональных чисел");
	  printf("3. %s\n", "Сокращение дроби");
	  printf("4. %s\n", "Проверка на целое");
	  printf("5. %s\n", "Преообразование целого в дробное");
	  printf("6. %s\n", "Преобразование дробного в целое");
	  printf("7. %s\n", "Сложение");
	  printf("8. %s\n", "Вычитание");
	  printf("9. %s\n", "Умножение");
	  printf("10. %s\n", "Деление");
	  printf("11. %s\n", "Возврат в меню");
	  return enterIntNumInterval(1, 13);
  }
