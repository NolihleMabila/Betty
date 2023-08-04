#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: string
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int c;
	unsigned int ni;
	int min;
	int isi;

	c = 0;
	ni = 0;
	min = 1;
	isi = 0;
	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
