#include "main.h"
/**
 * print_to_98 - Print all natural numbers from n to 98
 * followed by a new line
 * @n: integer
 */


void print_to_98(int n)
{
	int m;

	for (m = n; m <= 98; m++)
	{
		int firstDigit;
		int secondDigit;

		firstDigit = m / 10;
		secondDigit = m % 10;
		_putchar('0' + firstDigit);
		_putchar('0' + secondDigit);
		if (m != 98)
		{
			_putchar(44);
			_putchar(' ');
		}
	}
	_putchar('\n');
}

