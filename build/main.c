#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "main.h"

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");


	struct NATURAL *nats;
	struct INTEGER *ints;
	struct RATIONAL *rats;
	struct POLYNOMIAL *pols;
	nats = (struct NATURAL*)malloc(COUNT_NUMBERS*sizeof(struct NATURAL));
	ints = (struct INTEGER*)malloc(COUNT_NUMBERS*sizeof(struct INTEGER));
	rats = (struct RATIONAL*)malloc(COUNT_NUMBERS*sizeof(struct RATIONAL));
	pols = (struct POLYNOMIAL*)malloc(COUNT_NUMBERS*sizeof(struct POLYNOMIAL));

	short int repeat = 1;

	while (repeat)
	{
		system("cls");

		/* Main menu */
		printf("1. %s\n", "Действия с натуральными числами");
		printf("2. %s\n", "Действия с целыми числами");
		printf("3. %s\n", "Действия с рациональными числами");
		printf("4. %s\n", "Действия с многочленами");
		printf("5. %s\n", "Выход из программы");

		_uint16 menu_item = enterIntNumInterval(1, 5);

		system("cls");
		int item = -1;

		switch (menu_item)
		{
		case MENU_NATURAL:
			menuNatural(nats);
			break;

		case MENU_INTEGER:
			menuInteger(ints, nats);
			break;

		case MENU_RATIONAL:
			menuRational(rats, ints);
			break;

		case MENU_POLYNOMS:
			menuPolynomial(pols);
			break;
		case MENU_EXIT:
			repeat = 0;
			break;
		}
	}
	printf("Нажмите любую клавишу для выхода из программы");
	return 0;
}
