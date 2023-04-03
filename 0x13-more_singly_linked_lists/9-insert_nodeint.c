#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = (*head);
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	while (head != NULL && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (count == idx - 1)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
