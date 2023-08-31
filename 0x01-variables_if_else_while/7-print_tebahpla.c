#include <stdio.h>

/**
 * main - The entry of the program
 *
 * Description: this program is to print the alphabet in a reverse way
 *
 * Return: Always (0) succeed
**/

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
