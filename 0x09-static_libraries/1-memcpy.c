#include "main.h"
/**
 * _memcpy - copies n byte from  memory area
 * @dest: memory area 1
 * @src: memory where 2
 * @n: number of bytes
 * Return: memory area 2
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i;

	for (i = n; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
