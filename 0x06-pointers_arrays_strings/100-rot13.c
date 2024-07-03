#include "main.h"
#include <stdio.h>

/**
 * rot13 - Ecodes a string using the ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		i = 0;
		while (alphabet[i])
		{
			if (*ptr == alphabet[i])
			{
				*ptr = rot13[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (s);
}

