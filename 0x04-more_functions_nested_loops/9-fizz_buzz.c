#include <stdio.h>

/**
 * fizz_buzz - Fizz-Buzz interview test
 * @n: integer
 */
void fizz_buzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 100;

	fizz_buzz(n);
	return (0);
}

