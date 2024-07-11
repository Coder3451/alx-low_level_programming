/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: integer variable
 * @y: integer variable
 *
 * Return: Returns the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(y, x - 1));
}

