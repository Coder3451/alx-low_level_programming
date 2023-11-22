#include "main.h"

/**
 * _printnum - Print an integer.
 * @n: The integer to be printed
 *
 * Return: Returns the number of printed numbers.
 */
int _printnum(int n)
{
	int counter;

	counter = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		counter++;
	}

	if (n / 10)
	{
		counter += _printnum(n / 10);
	}

	_putchar('0' + (n % 10));
	counter++;

	return (counter);
}
