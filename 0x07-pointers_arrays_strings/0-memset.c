#include <stdio.h>

char *_memset(char *s, char b, unsigned int n);

int main(void)
{
	char buffer[10];
	/* Filling the buffer with 'A' */
	_memset(buffer, 'A', sizeof(buffer));

	/* Printing the buffer */
	for (int i = 0; i < sizeof(buffer); i++)
	{
	printf("%c ", buffer[i]);
	}
	printf("\n");

	return 0;
}
