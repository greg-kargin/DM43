/*LED_P_Z
Описание:
	Функция возвращает старший коэффициент многочлена
Подключаемые модули:
	отсутствуют
Описание переменных:
	st - Многочлен

Голубев Гордей
Хабаров Артем
4306
*/
#include "../build/main.h"
struct RATIONAL LED_P_Z(struct POLYNOMIAL st)
{
return st.factors[st.degree];
}