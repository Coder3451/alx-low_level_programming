#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line
 * @a: integer pointer
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

