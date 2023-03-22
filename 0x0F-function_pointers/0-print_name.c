#include "function_pointers.h"
#include <stddef.h>
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
