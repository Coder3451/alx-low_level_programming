#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this function assign a random numbeer to n and print its sign
 * Return: it returns 0 when compiled successfully
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

