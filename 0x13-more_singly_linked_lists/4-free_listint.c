#include "lists.h"

/**
 * free_listint - frees a linked listint_t list --
 * @head: head of a list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i);
	}
}
