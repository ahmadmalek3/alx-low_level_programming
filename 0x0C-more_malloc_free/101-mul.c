#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
	if (!_isdigit(num1[i]))
	{
	printf("Error\n");
	return (98);
	}
	}

	for (int i = 0; num2[i] != '\0'; i++)
	{
	if (!_isdigit(num2[i]))
	{
	printf("Error\n");
	return (98);
	}
	}

	int len1 = 0, len2 = 0;
	while (num1[len1] != '\0')
	len1++;
	while (num2[len2] != '\0')
	len2++;

	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	if (result == NULL)
	{
	printf("Error\n");
	return (98);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
	int carry = 0;
	for (int j = len2 - 1; j >= 0; j--)
	{
	int digit1 = num1[i] - '0';
	int digit2 = num2[j] - '0';
	int product = digit1 * digit2 + result[i + j + 1] + carry;

	carry = product / 10;
	result[i + j + 1] = product % 10;
	}
	result[i] += carry;
	}

	int started = 0;
	for (int i = 0; i < result_len; i++)
	{
	if (result[i] != 0 || i == result_len - 1)
	started = 1;
	if (started)
	putchar(result[i] + '0');
	}

	putchar('\n');
	free(result);

	return (0);
}
