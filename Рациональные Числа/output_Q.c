#include "../build/main.h"
int output_Q(struct RATIONAL A)
{
	//printf("Числитель:\n");
	if (A.sign)
		printf("-");
	output_N(A.numerator);
	printf("/");
	//printf("Знаменатель:\n");
	output_N(A.denominator);
	return 0;
}