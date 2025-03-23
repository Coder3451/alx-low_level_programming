#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 * @array: the array.
 * @size: the size of the array.
 * @action: A pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
