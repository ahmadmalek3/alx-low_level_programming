#include <unistd.h>

/**
*main - entry of the peogram
*
*Description: This program is to result an error
*
*Return: 1 (an error)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
