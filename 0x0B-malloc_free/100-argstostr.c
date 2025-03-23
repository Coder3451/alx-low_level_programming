#include "main.h"

/**
 * _strlen - find length of a string
 * @s: the string
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: count arguments.
 * @av: the arguments.
 *
 * Return: Returns a pointer to a new string or NULL if it fails
 * NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *str;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	len = 0;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	j = 0;
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
