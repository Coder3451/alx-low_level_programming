#include "stdio.h"

/**
 * main - Entry point of the program
 *
 * This function prompts the user for their name, greets them,
 * and then cleans up the allocated memory.
 *
 * Returns: Always 0 to indicte successful execution.
 */

int sum(int a, int b);

int sum(int a, int b)
{
	return (a + b);
}

int main()
{
	int sumation = sum(2,3);
	printf("The sum is: " ,sumation);
//	char *name = get_name(); // Get the user's name
//	greet(name); // Greet the user
//	free(name); // Deallocate the memory used for the name
	return 0;
}
