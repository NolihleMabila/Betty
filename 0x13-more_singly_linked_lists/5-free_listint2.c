#include "lists.h"

/**
 * free_listint2 - frees a linked frees a listint_t list
 * it sets the ead to null --
 * @head: head of a list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *i;
	listint_t *num;

	if (head != NULL)
	{
		num = *head;
		while ((i = num) != NULL)
		{
			num = num->next;
			free(i);
		}
		*head = NULL;
	}
}
