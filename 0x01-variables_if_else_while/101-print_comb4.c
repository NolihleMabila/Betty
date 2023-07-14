#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int ch2;
	int ch3;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = ch + 1; ch2 <= '9'; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 <= '9'; ch3++)
			{
				if (ch == '8' && ch2 == '9')
				{
					;
				}
				else
				{
					if (ch != ch2)
				{
						putchar(ch);
						putchar(ch2);
						putchar(ch3);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
