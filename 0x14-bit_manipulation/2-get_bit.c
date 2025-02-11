#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number
 * @index: The index, starting from 0 of the bit you want to get
 *
 * Return: Returns the value of the bit at index index
 * Or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < (sizeof(unsigned long int) * 8))
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
