#include <unistd.h>
#include "main.h"
/**
 * print_sign - it prints the sign of a number
 * @n: it takes integer number
 *
 * Return: returns 0 when executed successfully
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

