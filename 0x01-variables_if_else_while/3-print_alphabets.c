#include <stdio.h>

/**
 * main - the entry of the program
 *
 * Description: this program i made to print all alphabets in small case
 *
 * Return: Always (0) correct
**/

int main(void)
{
	char Alpha = 'A';

	for (char alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	while (Alpha < 'Z')
	{
		putchar(Alpha);
	Alpha ++;
	}
	putchar('\n');

	return (0);
}
