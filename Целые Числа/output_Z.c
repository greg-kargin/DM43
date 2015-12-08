#include "../build/main.h"
int output_Z(struct INTEGER A)
{
	if (A.sign)
		printf("-");
	output_N(A.natural_part);
	return 0;
}