#include "lists.h"

/**
 * insert_nodeint_at_index - responsible for inserting a new node at a given position
 * @head: head of a list
 * @idx: index num where the new node will be inserted on a list.
 * @n: int agurment
 *
 * Return: the address of the new node and it has failed it will return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = h->next;
		h->next = node;
	}

	return (node);
}
