#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: returns 0 when executed successfully
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A' ; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

