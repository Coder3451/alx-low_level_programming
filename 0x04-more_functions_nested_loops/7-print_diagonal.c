#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: integer
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int m;
		int i;

		for (m = 0; m < n; m++)
		{
			for (i = 0; i < n; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

