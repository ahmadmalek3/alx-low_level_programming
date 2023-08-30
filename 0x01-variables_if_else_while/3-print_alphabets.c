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
	for (char Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		putchar(Alpha);
	}
	putchar('\n');
	return (0);
}
