#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * If separator is NULL, it doesn't print it.
 * @separator: Is the string to be printed between numbers.
 * @n: Is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Declare the argument holder */
	va_list param;
	unsigned int i;
	int number;

	/* Initialize the argument holder */
	va_start(param, n);

	/* Iterate over the variable arguments and print them */
	for (i = 0; i < n; i++)
	{
		/* Get the next argument from param  */
		number = va_arg(param, int);

		/* Print the number */
		printf("%d", number);

		/**
		 * If separator is not NULL 
		 * And this is not the lasst number, printf separator
		 */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* Clean up the variable argument list */
	va_end(param);

	printf("\n");
}

