/**
 * _memcpy - Copies memory area
 * @dest: character pointer
 * @src: character pointer
 * @n: unsigned integer variable
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

