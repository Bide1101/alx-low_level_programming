#include "dog.h"

/**
* init_dog - initializes struct of type dog
* @d: pointer to struct
* @name: pointer to the name of the dog
* @age: age of dog
* @owner: pointer to owner of the dog
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
