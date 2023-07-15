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

	for (ch = '0'; ch < '9'; ch++)
	{
		for (ch2 = ch + 1; ch2 <= '9'; ch2++)
		{
			putchar(ch);
			putchar(ch2);
			if (ch == '8' && ch2 == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
