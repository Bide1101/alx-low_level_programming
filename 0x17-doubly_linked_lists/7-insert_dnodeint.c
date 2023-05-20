#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: double pointer to the first node of the list.
* @idx: the index of the list where the new node should be added.
* @n: the data of the node to be added
* Return: The new node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL, *temp = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (*h == NULL && idx == 0)
	{	*h = newNode;
		return (newNode);
	}

	temp = *h;
	while (temp != NULL && count < idx)
	{	temp = temp->next;
		count++;
	}
	if (temp == NULL && count != idx)
	{	free(newNode);
		return (NULL);
	}
	if (temp == *h && count == idx)
	{	newNode->next = temp;
		temp->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	newNode->next = temp;
	newNode->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = newNode;
	temp->prev = newNode;

	return (newNode);
}
