#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursive - Recursive helper function to find the square root.
 * @n: The number for which the square root is to be calculated.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The square root of n, or -1
 * if it does not have a natural square root.
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
	/* Base case: Number does not have a natural square root */
	return (-1);
	}

	mid = (start + end) / 2;
	if (mid * mid == n)
	{
	/* Base case: Found the square root */
	return (mid);
	}
	else if (mid * mid > n)
	{
	/* Search in the left half */
	return (sqrt_recursive(n, start, mid - 1));
	}
	else
	{
	/* Search in the right half */
	return (sqrt_recursive(n, mid + 1, end));
	}
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

	/* Call the recursive helper function with the range of 0 to n */
	return (sqrt_recursive(n, 0, n));
}
