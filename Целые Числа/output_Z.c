#include "../build/main.h"
int output_Z(struct INTEGER a)
{
	if (a.sign)
		printf("-");
	for (int i = 0; i < a.natural_part.index; ++i)
		printf("%d", a.natural_part.number[i]);
	return 0;
}