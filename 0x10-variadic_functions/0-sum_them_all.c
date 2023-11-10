#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum all of its parameters.
 * @n: It is the number of the parameters.
 *
 * Return: The sum of all its parameters.
 * If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Initialize a pointer to the first variable argument. */
	va_list param;
	int sum;
	unsigned int i;

	/* Check if the numbeer of parameters is greater than zero. */
	if (n == 0)
	{
		return (0);
	}

	va_start(param, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(param, int);
	}

	/* Close the variable argument list. */
	va_end(param);

	return (sum);
}
