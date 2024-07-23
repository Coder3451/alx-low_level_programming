#include "main.h"

/**
 * _puts - writes the string, followed by a new line to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
