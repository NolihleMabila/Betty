#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index of a
 * listint_t linked list --
 * @head: head of a list
 * @index: index at which the node is deleted from the list
 *
 * Return: 1 if succesful, -1 for failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
		{
			previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
