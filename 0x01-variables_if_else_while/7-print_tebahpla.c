#include <stdio.h>
/**
 * main - entry point
 * Return: it returns 0 when successfully executed
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

