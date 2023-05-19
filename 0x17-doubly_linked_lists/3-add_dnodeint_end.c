#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: double pointer to the first node of the list
* @n: the data value that to be stored in the new node
* Return: a new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *temp = NULL;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	/* if the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}

	else
	{
		temp = *head;
	/* traverse to the last node of the list */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

	/* Add the new node at the end */
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
