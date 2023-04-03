#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list.
* @head: pointer to the pointer that points to the first node of the list.
* Return: returns the head node’s data (n) or 0 if list is empty.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp, *curr_h;
	int data = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	curr_h = temp->next;
	data = temp->n;
	free(*head);
	*head = curr_h;

	return (data);
}
