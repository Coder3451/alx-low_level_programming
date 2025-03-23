#include "stdio.h"

/**
 * main - Prints the opcodes of its own main function.
 * @argc: counts argument.
 * @argv: arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	arg = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
