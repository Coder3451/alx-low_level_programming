/**
 * _strlen_recursion - Returns the length of a string.
 * @s: points to a string
 *
 * Return: The length of a string as a integer type.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
