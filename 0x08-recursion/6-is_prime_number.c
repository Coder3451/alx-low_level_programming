int check_prime(int, int);
/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: integer variable
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, 2));
	/* Call helper function to check primality */
}

/**
 * check_prime - Helper function to check primality recursively.
 * @n: The number to check.
 * @divisor: The divisor to check divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
		/* Base case: n is only divisible by itself, so it's prime */
	}

	if (n % divisor == 0)
	{
		return (0);
		/* If n is divisible by  divisor, it's not prime */
	}

	return (check_prime(n, divisor + 1));
	/* Recursively check with the next divisor */
}
