#include <stdio.h>

/**
 * main - the entry of the program
 *
 * Description: this program will print all alphabet in lowercase except
 * q and e
 *
 * Return: Always (0) succeed
**/

int main(void)
{
	char alpha = 'a';
	/*for loop to print all alphabets*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{

	/*if condition to make exception for q and e*/
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
