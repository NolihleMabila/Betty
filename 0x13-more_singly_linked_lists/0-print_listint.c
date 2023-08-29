#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list -
 * @h: initial pointer of a list.
 *
 * Return: numbers of nodes of linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	[
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
