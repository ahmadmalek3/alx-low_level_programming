#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 * If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	/* Set memory to zero */
	for (unsigned int i = 0; i < nmemb * size; i++)
	((char *)ptr)[i] = 0;

	return (ptr);
}
