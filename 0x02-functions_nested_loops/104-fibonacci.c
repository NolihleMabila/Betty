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
	unsigned long int a, b, sum;
	unsigned long int c, d, e, f;
	unsigned long int g, h;

	a = 0;
	b = 1;

	for (i =0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	c = a / 10000000000;
	e = b / 10000000000;
	d = a % 10000000000;
	f = b % 10000000000;

	for (i = 93; i < 99; i++)
	{

		g = c + e;
		h = d + f;
		if (d + f > 9999999999)
		{
			g += 1;
			h %= 10000000000;
		}


		printf("%lu%lu", g, h);
		if (i != 98)
		{
			printf(", ");
			c = e;
			d = f;
			e = g;
			f = h;
		}
	}

	putchar('\n');
	return (0);
}


