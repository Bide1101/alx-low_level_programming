#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: name of the list
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	int count = 0;
	while (h)
	{
		if (h->str == NULL)
			return (0);

		else
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
