#include "main.h"

/**
 * _puts_recursion - Prints a null-terminated string
 * @s: The text to be printed
 *
 * Return: The number of printed characters.
 */
int _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_putchar(*s);
	return (1 + _puts_recursion(s + 1));
}
