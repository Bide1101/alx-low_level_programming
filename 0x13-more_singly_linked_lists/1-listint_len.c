#include "lists.h"

/**
* listint_len - a function that returns the number of elements
* in a linked listint_t list.
* @h: pointer to the first node of the list.
* Return: number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h != NULL;)
	{
		count++;
		h = h->next;
	}
	return (count);
}
