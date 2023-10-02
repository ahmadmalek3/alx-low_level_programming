#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
	for (c = argv[argc]; *c; c++)
	if (*c < '0' || *c > '9')
	return (printf("Error\n"));
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
