/**
 * _strlen_recursion - Returns the length of a string.
 * @s: points to a string
 *
 * Return: The length of a string as a integer type.
 */
int _strlen_recursion(char *s)
{
	unsigned int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
