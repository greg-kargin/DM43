/*MOD_ZZ_Z
Описание:
	Функция возвращает остаток от деления большего целого числа на меньшее или равное натуральное с остатком (делитель отличен от нуля)
Подключаемые модули:
DIV_ZZ_Z
TRANS_N_Z
MULL_ZZ_Z
SUB_Z_Z
	
Описание переменных:
	a - Делимое
	b - Делитель
	c, d - Вспомогательные переменные
	result - Остаток от деления
Бурыкин Емельян
Мясоедова Елизавета
4306
*/
#include "../build/main.h"
struct INTEGER MOD_ZZ_Z(struct INTEGER a, struct NATURAL b)
{
  struct INTEGER c, d;
  c=DIV_ZZ_Z(a, b);
  d=TRANS_N_Z(b);
  c=MUL_ZZ_Z(c, d);
  return SUB_ZZ_Z(a, c);
}
