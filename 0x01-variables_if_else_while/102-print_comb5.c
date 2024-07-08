#include <stdio.h>
/**
 * main - entry point
 * Return: it returns 0 when successfully executed
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = (i + 1); j < 100; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

