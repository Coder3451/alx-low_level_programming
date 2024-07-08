#include <stdio.h>
/**
 * main - entry point
 * Return: it returns 0 when successfully executed
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (!(i == 8 && j == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

