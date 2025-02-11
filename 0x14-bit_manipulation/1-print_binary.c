#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	int remainder = n & 1;

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar(remainder + '0');
}
