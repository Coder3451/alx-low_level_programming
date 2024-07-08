#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: integer
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	n = abs(n % 10);
	_putchar('0' + n);
	return (n);
}

