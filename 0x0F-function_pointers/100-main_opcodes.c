#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - Print the opcodes of a function.
 * @func: A pointer to the function.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(void (*func)(), int num_bytes)
{
	unsigned char *opcodes = (unsigned char *)func;

	for (int i = 0; i < num_bytes; i++)
	{
	printf("%02x", opcodes[i]);
	if (i < num_bytes - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 for success, 1 for incorrect argument count, 2 for negative bytes.
 */
int main(int argc, char *argv[])
{
	if (argc != 2) {
	printf("Error\n");
	return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0) {
	printf("Error\n");
	return (2);
	}

	print_opcodes((void *)&main, num_bytes);

	return (0);
}
