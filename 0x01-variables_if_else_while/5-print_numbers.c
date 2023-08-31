#include <stdio.h>

/**
 * main - the entry of the program
 *
 * Description: this is to print all digits from 0 to 9
 *
 * Return: Alawys (0) succeed
**/

int main(void)
{
	unsigned int SingleDigit;

	for (SingleDigit = 0 ; SingleDigit <= 9; SingleDigit++)
	{
		printf("%d", SingleDigit);
	}
	putchar('\n');
	return (0);
}
