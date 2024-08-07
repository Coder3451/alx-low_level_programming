#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: the size of the array argv
 * @argv: is an array of size argc
 *
 * Return: Returns the sum, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int count, num, sum;

	num = 0;
	for (count = 1; count < argc; count++)
	{
		num = atoi(argv[count]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
