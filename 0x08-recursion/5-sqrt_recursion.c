int _sqrt_helper(int, int, int);
/**
 * _sqrt_recursion - Rreturns the natural square root of a number.
 * @n: integer variable
 *
 * Return: Rreturns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1, n));
}
/**
 * _sqrt_helper - Is a helper function that takes three integers as input.
 * @n: integer variable
 * @min: integer variable
 * @max: integer variable
 *
 * Return: Returns the square root of n if it is found, or -1 otherwise.
 */
int _sqrt_helper(int n, int min, int max)
{
	long int mid;

	if (max < min)
	{
		return (-1);
	}

	mid = (min + max) % 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_helper(n, min, mid + 1));
	}
	else
	{
		return (_sqrt_helper(n, mid - 1, max));
	}
}

