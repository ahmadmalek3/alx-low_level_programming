#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial is to be calculated.
 *
 * Return: Factorial of n, or -1 for error.
 */
int factorial(int n)
{
	if (n < 0)
	{
	/* Error case: Negative number, return -1 */
	return (-1);
	}

	if (n == 0)
	{
	/* Base case: Factorial of 0 is 1 */
	return (1);
	}

	/* Recursive case: Calculate factorial of n-1 and multiply by n */
	return (n * factorial(n - 1));
}
