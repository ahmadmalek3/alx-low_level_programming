#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	func = get_op_func(operator);
	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
