#include "3-calc.h"

/**
 * op_add - Adds
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets remainder
 * @a: first number.
 * @b: second number.
 *
 * Return: Returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
