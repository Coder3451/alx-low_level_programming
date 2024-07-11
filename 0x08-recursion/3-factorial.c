/**
 * factorial - Returns the factorial of a given number.
 * @n: integer variable.
 *
 * Return: Returns the factorial of a given number.
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

