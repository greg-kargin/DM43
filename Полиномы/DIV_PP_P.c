// Частное от деления многочлена на многочлен
// Прототип - struct POLYNOMIAL DIV_PP_P (struct POLYNOMIAL, struct POLYNOMIAL)
// Произвоидтся деление a на b

// Подключаемые модули:
// DEG_P_N - Степень многочлена
// DIV_QQ_Q - Деление дробей (делитель отличен от нуля)
// SUB_QQ_Q - Вычитание дробей

// гр. 4305, Аллаяров, Хабиров

struct POLYNOMIAL DIV_PP_P(struct POLYNOMIAL a, struct POLYNOMIAL b)
{
	struct POLYNOMIAL res;
	int i, j, k, n, m;
	n = DEG_P_N(a); m = DEG_P_N(b);
	k = n - m;
	res.degree = k;
	res.factors = (struct RATIONAL*)malloc((k + 1) * sizeof(struct RATIONAL));
	for (; k >= 0; k--)
	{
		res.factors[k] = DIV_QQ_Q(a.factors[m + k], b.factors[m]);
		for (i = m + k; j >= k; j--)
			a.factors[j] = SUB_QQ_Q(a.factors[j], MUL_QQ_Q(res.factors[k], b.factors[j - k]));
	}
	return res;
}
