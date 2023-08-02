#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursive - Recursive helper function to find the square root.
 * @n: The number for which the square root is to be calculated.
 * @x: The current approximation of the square root.
 *
 * Return: The square root of n, or -1
 * if it does not have a natural square root.
 */
int sqrt_recursive(int n, int x)
{
	int sqrt_approx = (x + n / x) / 2;

	if (sqrt_approx == x || sqrt_approx == x + 1)
	{
	/* Base case: Found the square root or the next integer approximation */
	return (-1);
	}

	if (sqrt_approx * sqrt_approx == n)
	{
	/* Base case: Found the square root */
	return (sqrt_approx);
	}

	/* Continue the recursive search with the new approximation */
	return (sqrt_recursive(n, sqrt_approx));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 * Return: The square root of n, or -1
 * if it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	/* Error case: Negative number */
	return (-1);
	}

	/* Call the recursive helper function with the initial approximation of n/2 */
	return (sqrt_recursive(n, n / 2));
}
