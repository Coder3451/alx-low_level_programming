#include <unistd.h>
#include <string.h>
/**
 * main - it prints the message, followed by a new line , to the standard error
 * Return: it returns 1 when successfully compiled
 */
int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, "
			  "2015-10-19\n";
	size_t len = strlen(str);

	write(STDERR_FILENO, str, len);
	return (1);
}
