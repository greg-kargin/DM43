// НОД МНОГОЧЛЕНОВ
// Подключаемые модули:
// 1. DEG_P_N — Степень многочлена
// 2. MOD_PP_P — Остаток от деления многочлена на многочлен при делении с остатком
#include "../build/main.h"

struct POLYNOMIAL GCF_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B)
{
   do
   {
     if ( DEG_P_N(A) >= DEG_P_N(B))
       A = MOV_PP_P(A,B);
     else
       B = MOV_PP_P(B,A);
   } while((DEG_P_N(A) != 0 && A.factors[0].numerator.index != 0) || (DEG_P_N(B) != 0 && B.factors[0].numerator.index != 0));
   if (DEG_P_N(A) != 0 || A.factors[0].numerator.index != 0)
     return A;
   else
     return B;
}
