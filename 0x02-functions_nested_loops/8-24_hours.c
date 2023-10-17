#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(58);
					_putchar('0' + k);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
