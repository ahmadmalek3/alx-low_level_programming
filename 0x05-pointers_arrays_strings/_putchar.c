#include <unistd.h>

/**
 * putchar - write the cahr c of the output
 *
 * Return: in success 1.
 *
 * on error the -1 is returned
*/
int _putchar(char c);
{
	return (write(1, &c, 1));
}
