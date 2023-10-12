#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 * Return: return 0 when successfully executed
 */
int main(void)
{
	char message[] = "_putchar\n";
	int index = 0;

	while (message[index] != '\0')
	{
		_putchar(message[index]);
		index++;
	}
	return (0);
}
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
