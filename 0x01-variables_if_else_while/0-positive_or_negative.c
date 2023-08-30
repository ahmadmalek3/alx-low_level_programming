#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry of the program
 *
 * Description: This program is about generate random number
 * every time and print that if the number is positive, negative, or zero
 *
 * Return: Always (0) correct
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
