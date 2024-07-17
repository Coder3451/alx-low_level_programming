/**
 * _strlen: find the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
