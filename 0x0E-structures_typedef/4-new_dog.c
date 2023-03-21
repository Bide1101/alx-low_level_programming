#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, n_len, o_len;

	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	for (n_len = 0; name[n_len] != '\0'; n_len++)
		;
	d->name = malloc(n_len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= n_len; i++)
		d->name[i] = name[i];

	for (o_len = 0; owner[o_len] != '\0'; o_len++)
		;
	d->owner = malloc(o_len + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= o_len; i++)
		d->owner[i] = owner[i];

	d->age = age;
	return (d);
}
