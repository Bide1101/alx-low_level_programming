#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: struct dog
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = (d->name != NULL) ? d->name : "(nil)";
		float age = d->age;
		char *owner = (d->owner != NULL) ? d->owner : "(nil)";

		printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
	}
}

