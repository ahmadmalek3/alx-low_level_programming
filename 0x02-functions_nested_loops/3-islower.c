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

	for (c = 'a'; c <= 'Z'; c++)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}

		if (c >= 'A' && c <= 'Z')
		{
			return (0);
		}
	}
}
