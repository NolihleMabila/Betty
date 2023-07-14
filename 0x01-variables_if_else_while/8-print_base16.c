#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char l;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	return (0);
}
