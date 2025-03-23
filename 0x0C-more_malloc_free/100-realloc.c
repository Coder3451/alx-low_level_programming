#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space of ptr
 * @new_size: the size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, min;
	char *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return(malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;

	if (old_size < new_size)
		min = old_size;
	else
		min = new_size;

	for (i = 0; i < min; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
