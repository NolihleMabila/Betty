#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list --
 * @head: head of linked listg
 * .
 *
 * Return: the address of the node of a list where the loop starts --
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *head2;
	listint_t *previous;

	head2 = head;
	previous = head;
	while (head && head2 && head2->next)
	{
		head = head->next;
		head2 = head2->next->next;

		if (head == head2)
		{
			head = previous;
			previous =  head2;
			while (1)
			{
				head2 = previous;
				while (head2->next != head && head2->next != previous)
				{
					head2 = head2->next;
				}
				if (head2->next == head)
					break;

				head = head->next;
			}
			return (head2->next);
		}
	}

	return (NULL);
}
