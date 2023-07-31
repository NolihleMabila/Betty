#include "main.h"
/**
 * _memset -  function fills the first n bytes
 * @s: starting address
 * @b: the output value
 * @n: bytes to be changed
 * Return: new array of  n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
