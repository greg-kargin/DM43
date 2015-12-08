// Частное от деления многочлена на многочлен
// Прототип - struct POLYNOMIAL DIV_PP_P (struct POLYNOMIAL, struct POLYNOMIAL)
// Произвоидтся деление A на B

// Подключаемые модули:
// DEG_P_N - Степень многочлена
// DIV_QQ_Q - Деление дробей (делитель отличен от нуля)
// SUB_QQ_Q - Вычитание дробей

// гр. 4305, Аллаяров, Хабиров
#include "../build/main.h"

struct POLYNOMIAL DIV_PP_P(struct POLYNOMIAL A, struct POLYNOMIAL B)
{
	struct POLYNOMIAL res;
	int i, k, n, m;
	n = DEG_P_N(A); m = DEG_P_N(B);
	k = n - m;
	res.degree = k;
	res.factors = (struct RATIONAL*)malloc((k + 1) * sizeof(struct RATIONAL));
	for (; k >= 0; k--)
	{
		res.factors[k] = DIV_QQ_Q(A.factors[m + k], B.factors[m]);
		for (i = m + k; i >= k; i--)
			A.factors[i] = SUB_QQ_Q(A.factors[i], MUL_QQ_Q(res.factors[k], B.factors[i - k]));
	}
	return res;
}
