#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: the array.
 * @size: the number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: Returns the index of the first element.
 * If no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
