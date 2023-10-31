/**
 * _sqrt_recursion - Rreturns the natural square root of a number.
 * @n: integer variable
 *
 * Return: Rreturns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int guess;
	int square;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

       	guess = n / 2;
	square = guess * guess;
	if (square == n)
	{
		return (guess);
	}
	else if (square < n)
	{
		return (_sqrt_recursion(n - square) + 1);
	}
	else
	{
		return (_sqrt_recursion(n / 2));
	}
}
