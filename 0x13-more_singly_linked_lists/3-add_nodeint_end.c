#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: pointer to the first node of the list.
* @n: data of new node to be added.
* Return: address of new node.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addend_node, *temp;

	addend_node = malloc(sizeof(listint_t));
	if (addend_node == NULL)
		return (NULL);

	addend_node->n = n;
	addend_node->next = NULL;

	if (*head == NULL)
		*head = addend_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = addend_node;
	}
	return (addend_node);
}
