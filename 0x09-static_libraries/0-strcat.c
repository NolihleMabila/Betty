#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int dest_length = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_length + i] = src[i];

	dest[dest_length + i] = '\0';

	return (dest);
}
