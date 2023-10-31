#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: string using character pointer
 *
 * Return: Returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len;

	if (!s)
	{
		return (0);
	}

	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Checks whether a string is a palindrome or not
 * @s: character pointer
 * @start: integer pointer
 * @end: integer pointer
 *
 * Return: 1 if a string is a palindrome, otherwise 0.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		/* All characters have been compared, it's a palindrome */
		return (1);
	}

	if (s[start] != s[end])
	{
		/* Characters don't match, not a palindrome */
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}
