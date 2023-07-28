#include "main.h"

/**
 * rev_string - reverses array
 * @n: integer
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char l;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		l = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = l;
	}
}

/**
 * infinite_add - adds two  numbers together
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to call function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, l = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || a == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		l = val1 + val2 + a;
		if (l >= 10)
			a = 1;
		else
			a = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (l % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
