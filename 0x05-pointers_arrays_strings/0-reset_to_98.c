#include "main.h"

/**
 * reset_to_98 - take a value to pointer and make it to 98
 *
 * @n: int parameter
 *
 * Return: Nothing
*/

void reset_to_98(int *n)
{
	int a = 210;
	n = &a;

	*n = 98;
}
