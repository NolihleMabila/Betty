#include "main.h"
/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: an encoded string
 */
char *leet(char *str)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
