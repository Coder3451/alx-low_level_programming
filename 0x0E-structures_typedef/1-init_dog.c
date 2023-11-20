#include "dog.h"

/**
 * _strcpy - copies the string pointed to by src.
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: First character pointer.
 * @src: Second character pointer.
 *
 * Return: The character pointer to dest.
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
 * init_dog - A function that initiaze a variable of type struct dog.
 * @d: Pointer to struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner; Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		if (name != 0 && owner != 0)
		{
			_strcpy(d->name, name);
			d->age = age;
			_strcpy(d->owner, owner);
		}
	}
}
