#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - print sign of given number
 * @i: it takes integer parameter
 *
 * Return: returns zero when successfully executed
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i ==  0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}

