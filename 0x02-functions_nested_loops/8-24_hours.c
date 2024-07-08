#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			int hourTens = hour / 10;
			int hourOnes = hour % 10;
			int minuteTens = minute / 10;
			int minuteOnes = minute % 10;

			_putchar('0' + hourTens);
			_putchar('0' + hourOnes);
			_putchar(':');
			_putchar('0' + minuteTens);
			_putchar('0' + minuteOnes);
			_putchar('\n');
		}
	}
}

