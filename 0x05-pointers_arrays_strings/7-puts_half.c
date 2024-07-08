#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: character parameter
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting index for printing the second half */
	start_index = (length - 1) / 2 + 1;

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	/* Print a new line */
	_putchar('\n');
}

