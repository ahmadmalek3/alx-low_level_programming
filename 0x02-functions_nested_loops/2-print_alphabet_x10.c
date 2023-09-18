#include "main.h"

/**
 * print_alphabet_x10 - this prototype i made to
 * print alphabets ten times
**/

void print_alphabet_x10(void)
{
	char alpha1, alpha2;

	for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		_putchar(alpha2);
	}
	_putchar('\n');
}
