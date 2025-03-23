/**
 * add - Adds
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the difference of a and b.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the product of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the division of a and b.
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - Gets remainder
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the remainder of the division of a by b.
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
