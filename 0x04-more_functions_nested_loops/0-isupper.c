/**
 * _isupper - Check for uppercase character.
 * @c: charcter
 *
 * Return: returns 1 if c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

