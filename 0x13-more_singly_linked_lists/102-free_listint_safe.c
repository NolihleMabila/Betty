#include "lists.h"

/**
 * free_listp2 - frees a linked list --
 * @head: head of a linked list.
 *
 */
void free_listp2(listp_t **head)
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

/**
 * free_listint_safe - frees a linked listint_t list
 * @h: head of a listint_t linked list.
 *
 * Return: the size of the list that was free’d --
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *hp, *i, *add;
	listint_t *curr;

	hp = NULL;
	while (*h != NULL)
	{
		i = malloc(sizeof(listp_t));

		if (i == NULL)
			exit(98);

		i->p = (void *)*h;
		i->next = hp;
		hp = i;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hp);
				return (n);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		n++;
	}

	*h = NULL;
	free_listp2(&hp);
	return (n);
}
