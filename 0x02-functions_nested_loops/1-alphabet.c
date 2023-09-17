#include "main.h"

/**
 * print_alphabet - use the _putchar to print alphabet in lowercase
 * from a to z
**/

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');

}
