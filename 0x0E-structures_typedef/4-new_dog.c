#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog.
 * @age; age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: points to the new dog_t object,
 * 	or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog;
	char *name_Copy;
	char *owner_copy;

	new_Dog = malloc(sizeof(dog_t));
	if (new_Dog == NULL)
	{
		return (NULL);
	}

	name_Copy = strdup(name);
	if (name_Copy == NULL)
	{
		free(new_Dog);
		return (NULL);
	}

	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_Copy);
		free(new_Dog);
		return (NULL);
	}

	new_Dog->name = name_Copy;
	new_Dog->age = age;
	new_Dog->owner = owner_copy;

	return (new_Dog);
}
