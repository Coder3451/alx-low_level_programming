#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: is the size of argv
 * @argv: is an array of size argc
 *
 * Return: 0 when successfully executed.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

