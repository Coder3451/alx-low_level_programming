#include <stdio.h>
/**
 * main - this prints the alphabet in lowercase, followed by a new line
 * Return: returns 0 when successfully executed
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

