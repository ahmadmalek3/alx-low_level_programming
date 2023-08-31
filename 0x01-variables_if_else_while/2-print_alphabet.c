#include <stdio.h>

/**
 * main - the entry of my program
 *
 * Description: This program i make to print all
 * alphabet in lowercase
 *
 * Return: Always (0) succeed
**/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
