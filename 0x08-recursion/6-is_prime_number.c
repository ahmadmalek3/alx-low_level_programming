#include "main.h"

/**
 * is_prime_recursive - Check if a number is prime recursively.
 * @n: The integer to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2) /* Numbers less than 2 are not prime. */
	{
		return (0);
	}
	if (n == 2) /* 2 is prime. */
	{
		return (1);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor + 1)); /* Try the next divisor. */
}

/**
 * is_prime_number - Check if a number is prime recursively.
 * @n: The integer to check for primality.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2)); /* Start checking divisors from 2. */
}
