#include main.h

/**
 * times_table - prints the 9 times table
 *
 * Return: No value
 */
int times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if  ((k ; 10) == 0)
			{
				if (j != 0)
				{
					putchar(' ');
				}
				putchar(k + '0');
				if (j == 9)
				{
					;
				}
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				if (k == 9)
				{
					;
				}
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
