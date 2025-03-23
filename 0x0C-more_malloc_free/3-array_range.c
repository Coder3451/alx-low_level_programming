#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: the minimum value in the array.
 * @max: the maximum value in the array.
 *
 * Return: Returns a pointer to the newly created array.
 * If min > max or malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int i, range;
	int *ptr;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	ptr = malloc(range * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	for (i = 0; i < range; i++)
		ptr[i] = (min + i);

	return (ptr);
}
