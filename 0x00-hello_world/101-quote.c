#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char *str = "and that piece of art is useful\" - "
		"Dora Korpar, 2015-10-19\n";
	size_t len = strlen(str);

	write(STDERR_FILENO, str, len);
	return (1);
}
