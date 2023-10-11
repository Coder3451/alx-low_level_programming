#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 * Return: return 0 when successfully executed
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

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
