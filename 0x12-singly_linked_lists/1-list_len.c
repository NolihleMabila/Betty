#include "lists.h"
/**
 * list_len - Calculate the number of elements
 * @h: Pointer to a list
 * Return: Integer
 **/
size_t list_len(const list_t *h)
{
const list_t *i;
unsigned int n = 0;
i = h;
while (i)
{
n++;
i = i->next;
}
return (n);
}
