#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	count++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	return (NULL);

	j = 0;
	for (i = 0; i < word_count; i++)
	{
	while (str[j] == ' ')
	j++;

	len = 0;
	while (str[j + len] != ' ' && str[j + len] != '\0')
	len++;

	words[i] = malloc(sizeof(char) * (len + 1));

	if (words[i] == NULL)
	{
	for (k = 0; k < i; k++)
	free(words[k]);
	free(words);
	return (NULL);
	}
	for (k = 0; k < len; k++)
	words[i][k] = str[j++];

	words[i][k] = '\0';
	}
	words[word_count] = NULL;
	return (words);
}
