#include "main.h"

/**
 * _isdigit - checs for digits
 *@c: character
 * Return: 1 for digit and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
