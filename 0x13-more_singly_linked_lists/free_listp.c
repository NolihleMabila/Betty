#include "lists.h"

/**
 * free_listp - frees a linked list --
 * @head: head of a linked list.
 *
 */
void free_listp(listp_t **head)
{
	listp_t *i;
	listp_t *k;

	if (head != NULL)
	{
		k = *head;
		while ((i = k) != NULL)
		{
			k = k->next;
			free(i);
		}
		*head = NULL;
	}
}
