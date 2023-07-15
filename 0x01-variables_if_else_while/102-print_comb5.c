
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

	for (ch = 0; ch <= 98; ch++)
	{
		for (ch2 = ch + 1; ch2 <= 99; ch2++)
		{
			putchar((ch / 10) + '0');
			putchar((ch % 10) + '0');
			putchar(' ');
			putchar((ch2 / 10) + '0');
			putchar((ch2 % 10) + '0');
			if (ch != 98 && ch2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
