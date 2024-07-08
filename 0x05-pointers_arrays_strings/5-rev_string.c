#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: character pointer
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Reverse the string */
	start = 0;
	end = length - 1;

	while (start < end)
	{
		/* Swap characters at start and end indices */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the start and end indices towards the center */
		start++;
		end--;
	}
}

