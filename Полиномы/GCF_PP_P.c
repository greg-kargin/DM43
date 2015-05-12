// НОД МНОГОЧЛЕНОВ
// Подключаемые модули:
// 1. DEG_P_N — Степень многочлена
// 2. MOD_PP_P — Остаток от деления многочлена на многочлен при делении с остатком

#include "DEG_P_N.c"
#include "MOD_PP_P.c"

POLYNOMIAL GCF_PP_P(POLYNOMINAL *A, POLYNOMINAL *B)
{
   do
   {
     if ( DEG_P_N(A) >= DEG_P_N(B))
       A = MOD_PP_P(A,B);
     else
       B = MOD_PP_P(B,A);
   } while((DEG_P_N(A) != 0 && A->factors[0].numenator != 0) || (DEG_P_N(B)! = 0 && b->factors[0].numenator != 0));
   if (DEG_P_N(A) != 0 || A->factors[0].numenator != 0)
     return A;
   else
     return B;
}
