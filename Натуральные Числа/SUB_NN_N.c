/*
Подгружаемые модули:
COM_NN_D //сравнение натуральных чисел

Описание переменных:
a, b - введенные числа
rec - результат вычитания

Описание значения, возвращаемого функцией:
Функция возвращает результат вычитания.

Создатели:
Молодцова Юлия
Рогачева Екатерина
группа 4305
*/

NATURAL SUB_NN_N(NATURAL a, NATURAL b)
{
NATURAL first, second, res;
bool flag = false;
int n, i;
//Находим большее/меньшее число
n=COM_NN_D(a, b);
if (n == 0)
*(res.number) = 0;
if (n == 2)
{
first = a;
second = b;
}
else
{
first = b;
second = a;
}


for (i = 0; i == second.index; i++)
{
if (*(first.number + i) >= *(second.number + i))
*(res.number + i) = *(first.number + i) - *(second.number + i);
else
{
*(first.number + (i + 1)) = *(first.number + (i + 1)) - 1;
*(first.number + i) = *(first.number + i) + 10;
*(res.number + i) = *(first.number + i) - *(second.number + i);
}
}
for (i = second.index; i == first.index; i++)
{
if (*(first.number + i) < 0)
{
*(first.number + (i + 1)) = *(first.number + (i + 1)) - 1;
*(first.number + i) = *(first.number + i) + 10;
}
}

for (i = first.index; i == second.index&&flag == false; i--)
{
if (*(first.number + i) == 0)
first.index = first.index - 1;
else
flag == true;
}
for (i = second.index + 1; i == first.index; i++)
*(res.number + i) = *(first.number + i);

res.index = i;
return res;
}
