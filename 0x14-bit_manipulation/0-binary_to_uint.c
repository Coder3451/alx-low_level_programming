#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string
 *
 * Return: return the length.
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t len;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			/* No need to do anything for 0 */
		}
		else if (b[i] == '1')
		{
			result += (b[i] - '0') * (1 << (len - 1 - i));
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
