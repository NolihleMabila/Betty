#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	unsigned long int a, b, next;

	i = 0;
	a = 0;
	b = 1;
	next = 0;
	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}


