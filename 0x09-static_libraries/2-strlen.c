#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
