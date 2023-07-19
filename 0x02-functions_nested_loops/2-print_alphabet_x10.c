#include "main.h"

/**
 * print_alphabetx10- print alphabet ten times
 *
 */
void print_alphabetx10(void)
{
	char ch;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			_putchar('\n');
		}
	}
}
