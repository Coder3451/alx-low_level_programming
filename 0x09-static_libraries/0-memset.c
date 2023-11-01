/**
 * _memset - Fills memory with a constant byte.
 * @s: the address of memory to print
 * @b: the constant byte to be filled
 * @n: the size of bytes in the memory area to be filled
 *
 * Return: A pointer to the memory area s.
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
