//Умножение натурального числа на 10^k
#include "../build/main.h"
struct NATURAL MUL_Nk_N(struct NATURAL A, int k)
{
        int i, new_index;
        new_index = A.index + k;
        A.number = (int*) malloc ((new_index + 1) * sizeof (int));
        for (i = A.index; i >= 0; i--)
                A.number[i+k] = A.number[i];
        for (i = 0; i < k; i++)
                A.number[i] = 0;
        A.index = new_index;
        return A;
}
