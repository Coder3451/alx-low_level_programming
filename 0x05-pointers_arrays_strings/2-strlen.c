/**
 * _strlen - find length of a string
 * @s: the string
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
