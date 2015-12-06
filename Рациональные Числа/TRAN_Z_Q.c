//Подключаемые модули отсутствуют
//struct RATIONAL TRAN_Z_Q(struct INTEGER A), где А - преобразуемое целое число
//Функция возвращает (two) - дробь со знаменателем 1 и числителем А
//Знак остается от целого числа
//Аббасова-Романова-4307
#include "../build/main.h"

struct RATIONAL TRAN_Z_Q(struct INTEGER A)
{
int i = 0; //счетчик
struct RATIONAL two; //дробь, которую возвращает функция
two.denominator.number = NULL;
two.numerator.number = NULL;
two.denominator.index = A.natural_part.index;//старший разряд числителя
two.denominator.number = (int*)realloc(two.denominator.number, two.denominator.index*sizeof(int));
for (i = 0; i < A.natural_part.index; i++)
two.denominator.number[i] = A.natural_part.number[i];//"заполняем" числитель
two.numerator.index = 1;//старший разряд знаменателя 
two.numerator.number = (int*)realloc(two.numerator.number, 1*sizeof(int));
two.numerator.number[0] = 1;//знаменатель равен 1
two.sign = A.sign;//знак равен знаку числа А
return two;
}
