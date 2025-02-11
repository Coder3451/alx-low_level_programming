#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: The number
 * @index: The index, starting from 0 of the bit you want to set
 *
 * Return: Returns 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (sizeof(unsigned long int) * 8))
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
