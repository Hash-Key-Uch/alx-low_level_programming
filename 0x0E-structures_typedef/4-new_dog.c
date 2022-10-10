#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *doga;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doga = malloc(sizeof(dog_t));
	if (doga == NULL)
	{
		free(doga);
		return (NULL);
	}
	doga->name = malloc(i * sizeof(doga->name));
	if (doga->name == NULL)
	{
		free(doga->name);
		free(doga);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doga->name[k] = name[k];
	doga->age = age;
	doga->owner = malloc(j * sizeof(doga->owner));
	if (doga->owner == NULL)
	{
		free(doga->owner);
		free(doga->name);
		free(doga);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doga->owner[k] = owner[k];
	return (doga);
}
