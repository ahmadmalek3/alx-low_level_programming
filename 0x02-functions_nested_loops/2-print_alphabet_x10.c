#include "main.h"

/**
 * print_alphabet_x10 - this prototype i made to
 * print alphabets ten times
**/

void print_alphabet_x10(void)
{
	int alpha1;
	char alpha2;

	for (alpha1 = 1 ; alpha1 <= 10; alpha1++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
		_putchar(alpha2);
		}
		_putchar('\n');
	}
}
