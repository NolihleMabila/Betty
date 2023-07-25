#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: int 1
 * @b: int 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i;
	int k;

	i = *a;
	k = *b;
	*a = k;
	*b = i;
}
