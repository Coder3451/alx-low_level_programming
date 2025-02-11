#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from one number to another
 * @n: The First number
 * @m: The second number
 *
 * Return: Returns the number of bits you would need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int diff = n ^ m;
	int i = 0;

	while (diff)
	{
		i += diff & 1;
		diff = diff >> 1;
	}

	return (i);
}
