#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include "_putchar.c"
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
