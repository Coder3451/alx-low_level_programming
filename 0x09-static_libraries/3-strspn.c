/**
 * _strspn - Gets the length of a prefix substring.
 * @s: character pointer
 * @accept: character pointer
 *
 * Return: The number of bytes in the initial segment of s.
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		s++;
	}

	return (count);
}

