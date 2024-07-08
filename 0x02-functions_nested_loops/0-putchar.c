#include "main.h"
/**
 * main - entry point
 * Return: return 0 when successfully executed
 */
int main(void)
{
	char message[] = "_putchar\n";
	int index = 0;

	while (message[index] != '\0')
	{
		_putchar(message[index]);
		index++;
	}
	return (0);
}

