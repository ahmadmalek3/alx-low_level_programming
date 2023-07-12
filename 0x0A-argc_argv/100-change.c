#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_coins - Calculates the minimum number of coins
 *required to make change
 * @cents: The amount of money in cents
 *
 * Return: The minimum number of coins
 */
int calculate_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	return (coins);
}

/**
 * main - Prints the minimum number of coins to make change
 * for an amount of money
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = calculate_coins(cents);

	printf("%d\n", coins);
	return (0);
}
