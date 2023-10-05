#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len = 0;
	int index = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len])
	len++;
	total_len += len;
	}

	str = malloc(sizeof(char) * (total_len + ac + 1));
	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len])
	{
	str[index++] = av[i][len];
	len++;
	}
	str[index++] = '\n';
	}

	str[index] = '\0';

	return (str);
}
