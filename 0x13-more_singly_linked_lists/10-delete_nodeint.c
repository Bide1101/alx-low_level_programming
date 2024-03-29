#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the node at index
* (index) of a listint_t linked list.
* @head: pointer to the first node of the list.
* @index: index to be deleted.
* Return: return 1 success or -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp2, *tmp = *head;
	unsigned int count = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (count < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp2 = tmp;
		tmp = tmp->next;
		count++;
	}

	tmp2->next = tmp->next;
	free(tmp);
	return (-1);
}
