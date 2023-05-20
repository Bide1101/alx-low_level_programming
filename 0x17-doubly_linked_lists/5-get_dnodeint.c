#include "lists.h"

/**
* get_dnodeint_at_index - a function that returns the nth node of
* a dlistint_t linked list.
* @head: ponter to the first node of the list
* @index: the index of the node to get.
* Return: the node at the index given or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}

	return (NULL);
}
