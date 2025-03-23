#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size of memory to be allocated.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);

	return (ptr);
}
