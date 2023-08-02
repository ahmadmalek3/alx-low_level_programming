#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: Result of x raised to the power of y, or -1 for error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	/* Error case: Negative exponent, return -1 */
	return (-1);
	}

	if (y == 0)
	{
	/* Base case: Anything raised to the power of 0 is 1 */
	return (1);
	}

	/* Recursive case: Calculate x^(y-1) and multiply by x */
	return (x * _pow_recursion(x, y - 1));
}
