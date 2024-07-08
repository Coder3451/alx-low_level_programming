#include "main.h"

/**
 * more_numbers - Print 10 times the numbers, from 0 to 14
 * followed by a new line.
 */
void more_numbers(void)
{
	int num;
	int howMany;

	for (howMany = 0; howMany < 10; howMany++)
	{
		for (num = 0; num <= 14; num++)
		{
			int firstDigit;
			int secondDigit;

			firstDigit = num / 10;
			secondDigit = num % 10;
			if (num > 9)
			{
				_putchar(firstDigit + '0');
			}
			_putchar(secondDigit + '0');
		}
		_putchar('\n');

	}
}

