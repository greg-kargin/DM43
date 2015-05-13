//  ADD_QQ_Q
//  01.05.15.
//  Сложение дробей
int ADD_QQ_Q(NATURAL chislitel_1,NATURAL znamenatel_1,short znak_1, NATURAL chislitel_2,NATURAL znamenatel_2, short znak_2, NATURAL * otvet_chislitel,NATURAL * otvet_znamenatel, short * otvet_znak)
// chislitel_1 - числитель первой дроби, аналог znamenatel_1
// znamenatel_2 - знаменатель второй дроби, аналог chislitel_2
// otvet_chislitel - АДРЕС переменной для хранения числителя получившейся дроби, аналог otvet_znamenatel
{
    int NOK; //НОК знаменателей
    int mnojitel_1, mnojitel_2; // множители числителей
    if (znamenatel_1==0 || znamenatel_2==0)
    {
        puts("Функция: ADD_QQ_Q; Знаменатель дроби равен 0!");
        return 0;  // код ошибки
    }
  
    NOK = LCM_NN_N(znamenatel_1,znamenatel_2); // НОК целых чисел
    
    mnojitel_1 = NOK / znamenatel_1;
    mnojitel_2 = NOK / znamenatel_2;
    
    chislitel_1 = MUL_ZZ_Z(chislitel_1, mnojitel_1); // умножение целых чисел
    chislitel_2 = MUL_ZZ_Z(chislitel_2, mnojitel_2);
    
    if (znak_1 == 1 || znak_2 == 1) // если какое-то отрицательное
    {
        if (znak_1 == 1 && znak_2 == 1) // если оба отрицательные
        {
            *otvet_chislitel = ADD_ZZ_Z(chislitel_1, chislitel_2); //  сложение целых чисел
            *otvet_znamenatel = NOK;
            *otvet_znak = 1;
            return 1;
        }
        // ************
        if (znak_1 == 1 && znak_2 == 0) // первая дробь отрицательна
        {
            if (chislitel_1 >= chislitel_2)
            {
                *otvet_chislitel = SUB_NN_N(chislitel_1, chislitel_2); // вычитание из большего меньшее
                *otvet_znamenatel = NOK;
                *otvet_znak = 1;
                return 1;
            }
            else
            {
                *otvet_chislitel = SUB_NN_N(chislitel_2, chislitel_1); // вычитание из большего меньшее
                *otvet_znamenatel = NOK;
                *otvet_znak = 0;
                return 1;
            }
        }
        // ************
        if (znak_1 == 0 && znak_2 == 1) // вторая дробь отрицательна
        {
            if (chislitel_1 >= chislitel_2)
            {
                *otvet_chislitel = SUB_NN_N(chislitel_1, chislitel_2); // вычитание из большего меньшее
                *otvet_znamenatel = NOK;
                *otvet_znak = 0;
                return 1;
            }
            else
            {
                *otvet_chislitel = SUB_NN_N(chislitel_2, chislitel_1); // вычитание из большего меньшее
                *otvet_znamenatel = NOK;
                *otvet_znak = 1;
                return 1;
            }

        }
    }
    // ************
    else // оба числа положительны
    {
        *otvet_chislitel = ADD_ZZ_Z(chislitel_1, chislitel_2); //  сложение целых чисел
        *otvet_znamenatel = NOK;
        *otvet_znak = 0;
    }
   
    
    return 1; // корректное завершение программы
}
//________________________________________________________________________________________
