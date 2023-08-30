#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linkedlist...
 * @head: head of a list
 * @n: number
 *
 * Return: address of the new element. NUll for failed execution
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (*head);
}
