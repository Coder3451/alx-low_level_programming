#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes character in ASCII number
 *
 * Return: returns 1 if c is a letter,lowercase or uppercase
 * otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

