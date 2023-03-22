#include "function_pointers.h"
#include <stddef.h>

/**
* print_name -  a function that prints a name.
* @name: the string to be printed
* @f: pointer to the string
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
