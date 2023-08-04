#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * @c: check for character
 *Return: 1 for upercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
