#include "../build/main.h"
int output_N(struct NATURAL a)
{
	for (int i = 0; i < a.index; ++i)
		printf("%d", a.number[i]);
	return 0;
}