#include <stdio.h>

/**
 * main - the entry of the code
 *
 * Description: This program is the of the last one but with comma
 * and speces between each number
 *
 * Return: Always (0) succeed
**/

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
