#include "main.h"

/**
 * print_sign - check if the number pos or neg or zero
 *
 * @n: the input which we check
 *
 * Return: it return + if pos, - if neg, and 0 if zero
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
}
