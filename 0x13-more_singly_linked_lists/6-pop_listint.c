#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked lis,
 * and returns the head node data.
 * @head: head of a list
 *
 * Return: head node's data and if list is empty return 0 --
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *num;

	if (*head == NULL)
		return (0);

	num = *head;

	headnode = num->n;

	h = num->next;

	free(num);

	*head = h;

	return (headnode);
}
