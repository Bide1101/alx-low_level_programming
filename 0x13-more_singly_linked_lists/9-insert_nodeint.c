#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new node at
* a given position (idx).
* @head: pointer to the pointer that points to the first node.
* @idx: given index to insert new node.
* @n: data of the new_node.
* Return: returns a pointer to the new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx != 0)
	{
		tmp = *head;
		while (tmp != NULL && count < idx - 1)
		{
			tmp = tmp->next;
			count++;
		}
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
