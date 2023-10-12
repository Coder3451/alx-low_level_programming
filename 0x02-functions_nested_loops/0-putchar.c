#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - it print character
 * @c: takes one character parameter
 *
 * Return: return charcter c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - entry point
 * Return: return 0 when successfully executed
 */
int main(void)
{
	char display[] = "_putchar\n";
	int i = 0;

	while (display[i] != '\0')

	{
		_putchar(display[i]);
		i++;
	}
	return (0);
}
