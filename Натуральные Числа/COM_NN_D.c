/*
Сравнение натуральных чисел: 2 - если первое больше второго, 0, если равно, 1 иначе.
Выполнили: Вовк К.В. Эмомов Г.С. (4305)
*/
int COM_NN_D(struct NATURAL one,struct NATURAL two)
{
    if(one.index > two.index) return 2;
    if(two.index > one.index) return 1;
    for(int i = one.index-1;i >= 0;i--)
    {
        if(one.number[i] > two.number[i]) return 2;
        if(two.number[i] > one.number[i]) return 1;
    }
    return 0;
}
