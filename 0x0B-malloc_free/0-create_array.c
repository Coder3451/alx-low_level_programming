#include "main.h"

/**
 * create_array - Creates an array of chars.
 * And initializes it with a specific char.
 * @size: the size of the array
 * @c: the specific char t initialize the array
 *
 * Return: Return NULL if size = 0.
 * Return a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	i = 0;
	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
