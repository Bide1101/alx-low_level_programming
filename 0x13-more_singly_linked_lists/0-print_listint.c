#include "lists.h"

/**
* print_listint - prints all the elements of listint_t list
* @h: pointer to the first node of the list
* Return: number of nodes in listint_t list
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
