#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Is type of dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This the data structure defines type of dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);

#endif
