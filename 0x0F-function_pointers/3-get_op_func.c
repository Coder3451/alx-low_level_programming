#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation asked by the user.
 * @s: the operator passed as argument to the program.
 *
 * Return: Returns a pointer to the function that corresponds to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (s && (s[0] == ops[i].op[0]) && (s[1] == '\0'))
			return (ops[i].f);
		i++;
	}
	
	return (NULL);
}
