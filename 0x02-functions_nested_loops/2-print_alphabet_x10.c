#include "main.h"

/**
 * print_alphabet_x10 - this prototype i made to
 * print alphabets ten times
**/

void print_alphabet_x10(void)
{
	int alpha;
	char alpha;

	for (alpha =1 ; alpha <= 10; alpha++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
		_putchar(alpha2);
		}
		_putchar('\n');
	}
}
