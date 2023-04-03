#include "lists.h"

/**
* free_listint2 - frees a listint_t list and sets the head to NULL.
* @head: pointer to the pointer that points to the first node on the list.
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
