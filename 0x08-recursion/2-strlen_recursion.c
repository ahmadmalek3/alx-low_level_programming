#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	/* Base case: End of string reached, return 0 */
	return (0);
	}

	/* Move to the next character recursively and add 1 to the result */
	return (1 + _strlen_recursion(s + 1));
}
