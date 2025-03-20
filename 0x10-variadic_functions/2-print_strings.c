#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
