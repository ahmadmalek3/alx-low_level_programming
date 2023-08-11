#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         If malloc fails, the function terminates with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	fprintf(stderr, "Memory allocation failed\n");
	exit(98);
	}

	return (ptr);
}
