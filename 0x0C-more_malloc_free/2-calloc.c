#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: the address of memory to print
 * @b: the constant byte to be filled
 * @n: the size of btyes in the memory area to be filled
 *
 * Return: A pointer to the memroy area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size;
	char *ptr;

	ptr = s;
	for (size = 0; size < n; size++)
	{
		ptr[size] = b;
	}
	return (ptr);
}

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
