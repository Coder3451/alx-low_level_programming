#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: return 0 when successfully executed
 */
int main(void)
{
	char print[] = "_putchar\n";
	int i = 0;

	while (print[i] != '\0')
	{
		_putchar(print[i]);
		i++;
	}
	return (0);
}
