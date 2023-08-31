#include <stdio.h>

/**
 * main - the entry of the program
 *
 * Description: This progam i make to print the single digits with base
 * 10 means from 0 to 9
 * Return: Always (0) succeed
**/

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
