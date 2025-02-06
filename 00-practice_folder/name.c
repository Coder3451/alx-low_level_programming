#include "main.h"

/**
 * name - asks the user for their name
 */

char *get_name(void)
{
        char *name = malloc(100);  // Allocate space for name (assuming max 99 characters)
        if (name == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}

	printf("Enter your name: ");
        fgets(name, 100, stdin); // Use fgets for safer input handling
        // Remove trailing newline (if present)
        name[strcspn(name, "\n")] = '\0';

        return name; // Return pointer to the name string in memory
}
