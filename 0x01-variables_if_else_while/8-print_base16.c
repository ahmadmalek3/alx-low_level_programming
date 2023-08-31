
#include <stdio.h>

/**
 * main - the entry of my program
 *
 * Description: This program to print the 16 hexadecimal system from 0 to f
 *
 * Return: Always (0) succeed
**/

int main(void)
{
	char hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar(hexa);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');
	return (0);
}
