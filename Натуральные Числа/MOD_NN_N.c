// Подгружаемые модули:
//DIV_NN_N
//SUB_NDN_N
// Прототип NATURAL MOD_NN_N(NATURAL delimoe,NATURAL chastnoe),где
// 1-й параметр - //Делимое
// 2-й параметр - Делитель
// Находит остаток от деления двух натуральных чисел
// Бельмач,Сафонов,Кондратьев - 4307
#include "../build/main.h"
#include "DIV_NN_N.c"
#include "SUB_NDN_N.c"
struct NATURAL MOD_NN_N(struct NATURAL delimoe, struct NATURAL deletel) // chastnoe = delimoe / delitel
{
        int i = 1;
		struct NATURAL chastnoe;
		struct NATURAL result;
        chastnoe = DIV_NN_N(delimoe, delitel)
               do
              {
              delimoe = SUB_NDN_N(delimoe, ( [chastnoe.index-i]*10^(index-i)*delitel));
              i++:
              } while (i < index+1);
                result = delimoe;
                return(result);
}
