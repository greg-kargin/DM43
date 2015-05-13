
int MUL_ND_N(int *mas, int *index, short *znak, int k)
// mas - адрес первого элемента структуры, хранящей число (задом - наперед)
// index - количество цифр в числе
// znak - знак числа (0 - положительное, 1 - отрицательное)
// k - число, на которое производится умножение
//
{
    int * res; // структура получившегося числа
    int p; // для хранения результата умножения разряда на k
    int i,j; // для цикла
    res=(int*)malloc((*index)*sizeof(int)); // обнуление res
    for (i=0;i<(*index);i++)
        *(res+i)=0;
    
    for (i=0; i<(*index); i++)
    {
        p=*(mas+i) * k;
        for (j=i; p>0; j++)
        {
            if (j>(*index)) // если вылезли за пределы res
            {
                res = (int*)realloc(res, ((*index)+ 1 )*sizeof(int)); // добавляем новый элемент
                (*index)++ ;
                *(res + (*index)) = 0; // обнуляем его
            }
            *(res+j) += p % 10;
            p /= 10;
        }
        
    }
    if (k==1)
    {
        (*znak)*=1;
        (*znak) = (*znak) % 2;
    }
        
    mas = res;
    return 1;
}
