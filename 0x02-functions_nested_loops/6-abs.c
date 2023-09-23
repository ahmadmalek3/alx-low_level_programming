#include "main.h"

/**
 * _abs - finction that prints the absolute value of an integer
 * @x: the inpt we make positive always
 * Return: if positive return the real number and if
 * negative return the neg of the value
**/

int _abs(int x)
{

	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}
