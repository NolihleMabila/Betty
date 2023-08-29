#include "lists.h"

/**
 * reverse_listint - reverses a linked listint_t list.
 * @head: head of a list ---
 *
 * Return:  a pointer to the first node of the reversed list --
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *num;

	i = NULL;
	num = NULL;

	while (*head != NULL)
	{
		num = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = num;
	}

	*head = i;
	return (*head);
}
