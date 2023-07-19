#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum, sum_3, sum_5;
	int i;

	sum = 0;
	sum_3 = 0;
	sum_5 = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum_3 += i;
		}
		else if ((i % 5) == 0)
		{
			sum_5 += i;
		}
		else
		{
			;
		}
	}
	sum = sum_3 + sum_5;
	printf("%lu\n", sum);
	return (0);
}
