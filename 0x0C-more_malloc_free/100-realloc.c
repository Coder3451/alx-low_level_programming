#include <stdlib.h>
#include <string.h>

/**
 * _realloc - It  reallocates a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size <= old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
