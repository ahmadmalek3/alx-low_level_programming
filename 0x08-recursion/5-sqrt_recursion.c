#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of 'n', or -1
 * if it doesn't have a natural square root.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n) /* Base case: Found the square root. */
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, guess + 1)); /* Recursively try the next guess. */
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of 'n', or -1
 * if 'n' doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* If 'n' is negative, it doesn't have a natural square root. */
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}
