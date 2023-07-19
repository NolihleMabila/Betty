#include main.h

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
	if (ch >= 91 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n')
}
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	_islower();
	return (0);
}

