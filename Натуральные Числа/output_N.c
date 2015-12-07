#include "../build/main.h"
int output_N(struct NATURAL a)
{
	for (int i = a.index-1; i >= 0; --i)
		printf("%d", a.number[i]);
	return 0;
}