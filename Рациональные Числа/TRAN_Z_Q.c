//Подключаемые модули отсутствуют
//struct RATIONAL TRAN_Z_Q(struct INTEGER A), где А - преобразуемое целое число
//Функция возвращает (B) - дробь со знаменателем 1 и числителем А
//Знак остается от целого числа
//Аббасова-Романова-4307
#include "../build/main.h"

struct RATIONAL TRAN_Z_Q(struct INTEGER A)
{
int i = 0; //счетчик
struct RATIONAL B; //дробь, которую возвращает функция
B.denominator.number = NULL;
B.numerator.number = NULL;
B.denominator.index = A.natural_part.index;//старший разряд числителя
B.denominator.number = (int*)realloc(B.denominator.number, B.denominator.index*sizeof(int));
for (i = 0; i < A.natural_part.index; i++)
B.denominator.number[i] = A.natural_part.number[i];//"заполняем" числитель
B.numerator.index = 1;//старший разряд знаменателя 
B.numerator.number = (int*)realloc(B.numerator.number, 1*sizeof(int));
B.numerator.number[0] = 1;//знаменатель равен 1
B.sign = A.sign;//знак равен знаку числа А
return B;
}
