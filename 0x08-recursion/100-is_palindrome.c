/**
 * is_palindrome - Check whether a string is a palindrome or not.
 * @s: character pointer
 *
 * Return: Returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	if (*s != *(s + strlen(s) - 1))
	{
		return (0);
	}

	return (is_palindrome(s + 1));
}
