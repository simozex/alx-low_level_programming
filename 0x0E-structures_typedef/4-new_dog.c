#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: return doggy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen;
	int olen;
	int i;
	dog_t *doggy;

	nlen = strlen(name) + 1;
	olen = strlen(owner) + 1;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nlen * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(char));

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];

	return (doggy);
}
