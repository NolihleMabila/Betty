#include "main.h"

/**
 * print_number - check the code
 *@n: value
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int i;

	i = j;
	
	if (j < 0)
	{
		j *= -1;
		i = j;
		_putchar('-');
	}
	j /= 10;
	print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}


