#include <stdio.h>

/**
 * main - the entry of the program
 *
 * Description: this program prints all possible different
 * combinations of two digits.
 *
 * Return: Always (0)succeed
**/

int main(void)
{
	/*initialize the two variables for two digits*/
	int firstdigit, seconddigit;

	/*for loop for the first digit*/
	for (firstdigit = 0; firstdigit <= 8; firstdigit++)
	{
		for (seconddigit = firstdigit + 1; seconddigit <= 9; seconddigit++)
		{
			putchar(firstdigit + '0');
			putchar(seconddigit + '0');
			if (firstdigit != 8 || seconddigit != 9)
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
