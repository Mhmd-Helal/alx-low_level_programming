#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *a;
	char *b;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	a = strdup(name);
	if (a == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = a;
	new_dog->age = age;
	b = strdup(owner);
	if (b == NULL)
	{
		free(new_dog);
		free(a);
		return (NULL);
	}
	new_dog->owner = b;
	return (new_dog);
}
