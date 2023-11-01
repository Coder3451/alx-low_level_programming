#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: is the argument count
 * @argv: is an array of argument strings
 *
 * Return: 0 when successfully executed.
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
