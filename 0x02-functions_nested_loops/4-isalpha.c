#include "main.h"

/**
 * _isalpha - is a function check if the input alphabet or not
 *
 * @c: is the input
 *
 * Return: 1 if the c is alpha and else return 0
**/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'Z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
