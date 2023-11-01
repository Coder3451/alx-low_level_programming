#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 * @argc: the number command line arguments
 * @argv: the array of size argc
 * Return: 0 when successfully executed.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
