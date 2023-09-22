#include "main.h"

/**
 * _islower - function that check if you enter a lowercase
 * or not
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
**/

int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}

		else
		{
			return (0);
		}
}
