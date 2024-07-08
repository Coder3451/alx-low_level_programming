#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: integer
 */
void print_line(int n)
{
	if (n > 0)
	{
		int m;

		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

