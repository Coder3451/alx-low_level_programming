#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k;
			int firstDigit;
			int lastDigit;

			k = i * j;
			firstDigit = k / 10;
			lastDigit = k % 10;
			if (k >= 10)
			{
				_putchar('0' + firstDigit);
				_putchar('0' + lastDigit);
				if (j != 9)
				{
					_putchar(44);
					_putchar(' ');
					if (j >= 2 && i <= 4)
						_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + k);
				if (j != 9)
				{
					_putchar(44);
					_putchar(' ');
					if (j >= 2 && i <= 4)
						_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
