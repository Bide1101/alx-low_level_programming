#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index index of
* a dlistint_t linked list.
* @head: double pointer to the first node of the list.
* @index: he index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	/* if the node is not found at the index given */
	if (!temp)
		return (-1);

	/* if the node to be deleted is the first node */
	if (temp == *head)
		*head = temp->next;

	/* update the previous and next pointers */
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	/*  free the memory allocated */
	free(temp);

	return (1);
}
