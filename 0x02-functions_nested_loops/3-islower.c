#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: is int parameter of ASCII character
 *
 * Return: returns 1 if c is lowercase and returns 0 otherwise
 */
int _islower(int c)
{
	int l = c;

	if (l < 123 && l > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

