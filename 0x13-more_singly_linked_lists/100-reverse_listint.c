#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head: pointer to the pointer that points to the first node of the list.
* Return: a pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1 = NULL;
	listint_t *tmp2 = NULL;

	while (*head !=  NULL)
	{
		tmp1 = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp1;
	}
	*head = tmp2;
	return (*head);
}
