#include "../build/main.h"
struct NATURAL MUL_ND_N(struct NATURAL A, int k)
{
	struct NATURAL res; int i, p;
	if (!k)
	{
		res.index = 1;
		res.number = (int *)calloc(res.index, sizeof(int));
		return res;
	}
	res.index = A.index + 1;
	res.number = (int *)calloc(res.index, sizeof(int));
	for (i = 0; i < A.index; i++)
	{
		p = *(A.number + i) * k;
		*(res.number + i + 1) += p / 10;
		*(res.number + i) += p % 10;
	}
	if (!(*(res.number + A.index))) res.index--;
	return res;
}
