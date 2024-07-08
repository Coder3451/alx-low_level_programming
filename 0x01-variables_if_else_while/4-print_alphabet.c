#include <stdio.h>
/**
 * main - entry point
 * Return: it returns 0 when successfully executed
 */
int main(void)
{
	char charc;

	for (charc = 'a'; charc <= 'z'; charc++)
	{
		if (charc != 'q' && charc != 'e')
		{
			putchar(charc);
		}
	}
	putchar('\n');
	return (0);
}

