/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 * identical. otherwise returns 0.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
			/* Base case: s2 ends with a single '*' */
		}

		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
			/* Recursive case: s1 is empty */
		}

		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		/* Recursive case: s2 has more than one character */
	}
	if (*s1 == '\0')
	{
		return (*s2 == '\0');
		/* Base case: both strings are empty */
	}

	if (*s1 != *s2)
	{
		return (0);
		/* Base case: characters don't match */
	}

	return (wildcmp(s1 + 1, s2 + 1));
	/* Recursive case: characters match */
}
