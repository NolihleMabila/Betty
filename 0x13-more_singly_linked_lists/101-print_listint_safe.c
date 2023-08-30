#include "lists.h"

void free_listp(listp_t **head);

/**
 * print_listint_safe - prints a linked listint_t linked list.
 * @head: head of a listint_t linked list.
 *
 * Return: number of nodes in the list --
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *hp, *n, *add;

	hp = NULL;
	while (head != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)head;
		n->next = hp;
		hp = n;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&hp);
	return (nodes);
}
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
