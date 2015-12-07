#include "../build/main.h"
int output_Q(struct RATIONAL a)
{
	//printf("Числитель:\n");
	if (a.sign)
		printf("-");
	output_N(a.numerator);
	printf('/');
	//printf("Знаменатель:\n");
	output_N(a.denominator);
	return 0;
}