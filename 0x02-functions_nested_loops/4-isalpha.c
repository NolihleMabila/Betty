#include main.h

/**
 * _isalpha - check wether a character is an alphabet or nor
 *
 * @c: (character ASCII code0
 * Return: 1 ( for alphabet ) 0 for another type
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n')
}
