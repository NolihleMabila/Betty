#include"main.h"
/**
 *_islower - test for lowercase and returns values if a condiion is met
 *
 * @ch: ASII character
 *
 * Return: 1 (for characters that are lower case). 0 for non-lowercase
 *
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
