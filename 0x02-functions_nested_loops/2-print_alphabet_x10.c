#include "main.h"

/**
 * print_alphabet_x10- print alphabet ten times
 *
 */i
void print_alphabet_x10(void)
{
	char ch;
	char i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
