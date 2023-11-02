#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - prints an error message and exits with status 98
 */
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, k, len1 = 0, len2 = 0;
	char *num1, *num2;

	if (argc != 3)
		error_exit();

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] < '0' || argv[1][i] > '9')
			error_exit();
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] < '0' || argv[2][i] > '9')
			error_exit();

	num1 = argv[1];
	num2 = argv[2];

	while (*num1 == '0' && *(num1 + 1))
		num1++;
	while (*num2 == '0' && *(num2 + 1))
		num2++;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	k = len1 + len2 - 1;
	printf("%d\n", k);

	for (i = 0; i < len1 + len2; i++)
		printf("0");

	printf("\n");

	for (i = len2 - 1; i >= 0; i--)
	{
		for (j = len1 - 1; j >= 0; j--)
		{
			k = (num2[i] - '0') * (num1[j] - '0');
			printf("%d", k);
		}
		printf("\n");
	}

	return (0);
}
