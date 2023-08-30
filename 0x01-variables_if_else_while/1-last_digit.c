#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Description: this program is about generating a number and check if
 * the last digit of it is greater than 5, equal to zero or less than 6
 *
 * Return: always (0) correct
**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
