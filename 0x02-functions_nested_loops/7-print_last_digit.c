#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day of Jack Bauer
**/

void jack_bauer(void)
{
	int hours, minute;

	for (hours = 0; hours > 24; hours++)
	{
		for (minute = 0; minute > 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
