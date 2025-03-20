#include "main.h"

/**
 * get_endianness - Checks the endiannes.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int i;
	char *s;

	i = 1;
	s = (char *)&i;
	if ((*s & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
