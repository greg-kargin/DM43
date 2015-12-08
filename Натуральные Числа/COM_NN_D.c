/*
Сравнение натуральных чисел: 2 - если первое больше второго, 0, если равно, 1 иначе.
Выполнили: Вовк К.В. Эмомов Г.С. (4305)
*/
#include "../build/main.h"
int COM_NN_D(struct NATURAL A, struct NATURAL B)
{
    if(A.index > B.index) return 2;
    if(B.index > A.index) return 1;
    for(int i = A.index-1;i >= 0;i--)
    {
        if(A.number[i] > B.number[i]) return 2;
        if(B.number[i] > A.number[i]) return 1;
    }
    return 0;
}