#include "main.h"

/**
 * set_bit - it sets the value of a bit to 1 at a given index.
 * @n: is the number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: Returns 1 if it worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < (sizeof(unsigned long int) * 8))
	{
		*n = *n | (1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
