#include "../build/main.h"
int output_Z(struct INTEGER a)
{
	if (a.sign)
		printf("-");
	output_N(a.natural_part);
	return 0;
}