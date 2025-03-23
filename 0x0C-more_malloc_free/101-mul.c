#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: integer
 *
 * Return: returns 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: character pointer
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

/**
 * _atoi - Convert a string to an integer
 * @s: character pointer
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + sign * (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}
	return (result);
}

/**
 * mul - Multiplies two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: returns product when successfully executed.
 */
int mul(int a, int b)
{
	int product;

	product = a * b;

	return (product);
}

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar('0' + (n % 10));
}

/**
 * main - Multiplies two positive numbers.
 * @argc: count arguments.
 * @argv: arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2;
	int i, j;
	int result;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		j = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				_puts("Error");
				exit(98);
			}
			j++;
		}
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = mul(num1, num2);
	print_number(result);
	_putchar('\n');
	return (0);
}
