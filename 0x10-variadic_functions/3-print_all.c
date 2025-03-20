#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, count;
	char c, *s;
	double f;
	const char *sep;

	va_start(args, format);
	count = 0;
	sep = "";
	while (format && format[count])
	{
		switch (format[count])
		{
		case 'c':
			c = (char)va_arg(args, int);
			printf("%s%c", sep, c);
			sep = ", ";
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%s%d", sep, i);
			sep = ", ";
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%s%f", sep, f);
			sep = ", ";
			break;
		case 's':
			s = va_arg(args, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", sep, s);
			sep = ", ";
			break;
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
