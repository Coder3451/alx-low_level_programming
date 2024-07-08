#include <stdio.h>
/**
 * main - entry point
 * Return: it returns 0 when successfully executed
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		fprintf(stdout, "%d", num);
	}
	fprintf(stdout, "\n");
	return (0);
}

