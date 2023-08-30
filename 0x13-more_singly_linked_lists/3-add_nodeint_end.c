#include "lists.h"

/**
 * add_nodeint_end- afunction that adds a new node
 * at the end of a listint_t lis ---
 * @head: head of a list.
 * @n: n argument
 *
 * Return:this function returns the
 * address of the new element - NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num;
	listint_t *i;

	(void)i;

	num = malloc(sizeof(listint_t));

	if (num == NULL)
		return (NULL);

	num->n = n;
	num->next = NULL;
	i = *head;
	if (*head == NULL)
	{
		*head = num;
	}
	else
	{
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = num;
	}

	return (*head);
}
