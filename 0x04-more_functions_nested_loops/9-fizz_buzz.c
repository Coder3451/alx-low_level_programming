#include <stdio.h>

/**
 * fizz_buzz - Fizz-Buzz interview test
 *
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((n % 3) != 0 && (n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
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
	fizz_buzz();
	return (0);
}
