/*MOD_ZZ_Z
Описание:
	Функция возвращает остаток от деления большего целого числа на меньшее или равное натуральное с остатком (делитель отличен от нуля)
Подключаемые модули:
DIV_ZZ_Z
TRANS_N_Z
MULL_ZZ_Z
SUB_Z_Z
	
Описание переменных:
	A - Делимое
	B - Делитель
	c, d - Вспомогательные переменные
	result - Остаток от деления
Бурыкин Емельян
Мясоедова Елизавета
4306
*/
#include "../build/main.h"
struct INTEGER MOD_ZZ_Z(struct INTEGER A, struct NATURAL B)
{
  struct INTEGER C, D;
  C=DIV_ZZ_Z(A, B);
  D=TRANS_N_Z(B);
  C=MUL_ZZ_Z(C, D);
  return SUB_ZZ_Z(A, C);
}
