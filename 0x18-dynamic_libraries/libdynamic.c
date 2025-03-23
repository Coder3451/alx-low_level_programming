#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: is int parameter of ASCII character
 *
 * Return: returns 1 if c is lowercase and returns 0 otherwise
 */
int _islower(int c)
{
	int l = c;

	if (l < 123 && l > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isalpha - checks for alphabetic character
 * @c: takes character in ASCII number
 *
 * Return: returns 1 if c is a letter,lowercase or uppercase
 * otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _abs - Computes the absolute value of an integer
 * @n: integer
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

/**
 * _isupper - Check for uppercase character.
 * @c: charcter
 *
 * Return: returns 1 if c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

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
 * _strlen - find length of a string
 * @s: the string
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: character pointer
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

/**
 * _strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0), to the buffer pointed to by dest
 *  @dest: first character pointer
 *  @src: second character pointer
 *
 *  Return: the character pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
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
			sign *= -1;
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
 * _strcat - concatenates two strings
 * @dest: first character
 * @src: second character
 *
 * Return: returns character pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}

	dest[dest_len] = '\0';

	return (dest);
}

/**
 * _strncat - Concatenates two strings
 * @dest: first character pointer
 * @src: second character pointer
 * @n: integer variable
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * _strncpy - Copies a string
 * @dest: character pointer
 * @src: character pointer
 * @n: integer variable
 *
 * Return: return character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = 0; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - Compares two strings
 * @s1: first character pointer
 * @s2: second character pointer
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}

/**
 * _memset - Fills memory with a constant byte.
 * @s: the address of memory to print
 * @b: the constant byte to be filled
 * @n: the size of bytes in the memory area to be filled
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size;
	char *ptr;

	ptr = s;
	for (size = 0; size < n; size++)
		ptr[size] = b;

	return (ptr);
}

/**
 * _memcpy - Copies memory area
 * @dest: character pointer
 * @src: character pointer
 * @n: unsigned integer variable
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i  = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _strchr - Locates a character in a string
 * @s: character pointer
 * @c: character variable
 *
 * Return: A pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: character pointer
 * @accept: character pointer
 *
 * Return: The number of bytes in the initial segment of s.
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int found;
	int i;

	count = 0;
	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found + 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		s++;
	}

	return (count);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: character pointer
 * @accept: character pointer
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept.
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}

/**
 * _strstr - Locates the first occurrence of the substring needle
 *           in the string haystack.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] == needle[j])
					k++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}

	return (NULL);
}
