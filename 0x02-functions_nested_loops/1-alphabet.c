#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - it print alphabet in lowercase
 *
 * Return: it doesn't return anything
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

