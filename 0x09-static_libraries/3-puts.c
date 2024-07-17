#include "main.h"

/**
 * _puts - writes the string, followed by a new line to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
	int i;

	for (i = 0; i < sizeof(s); i++)
	{
		if (char[i] != '\0') {
			_putchar(char[i]);
		}
	}
}
