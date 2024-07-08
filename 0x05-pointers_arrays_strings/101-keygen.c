#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 13
/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	/* Generate random lowercase letters */
	for (i = 0; i < 4; i++)
		password[i] = 'a' + rand() % 26;

	/* Generate random uppercase letters */
	for (; i < 8; i++)
		password[i] = 'A' + rand() % 26;

	/* Generate randm digits */
	for (; i < 10; i++)
		password[i] = '0' + rand() % 10;

	/* Generate random special characters */
	password[i++] = '!' + rand() % 15;
	password[i] = '\0';

	printf("%s", password);

	return (0);
}

