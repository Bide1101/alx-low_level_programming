#include "lists.h"

/**
* print_listint - prints all the elements of listint_t list
* @h: pointer to the first node of the list
* Return: number of nodes in listint_t list
*/

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
