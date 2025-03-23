#include "main.h"

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: Returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **elem;

	if (width <= 0 || height <= 0)
		return (NULL);

	elem = malloc(height * sizeof(int *));
	if (elem == NULL)
		return (NULL);

	i = 0;
	j = 0;
	for (i = 0; i < height; i++)
	{
		elem[i] = calloc(width, sizeof(int));
		if (elem[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(elem[j]);
			free(elem);
			return (NULL);
		}
	}

	return (elem);
}
