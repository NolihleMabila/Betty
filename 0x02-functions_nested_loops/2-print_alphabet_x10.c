#include <stdio.h>

/**
 * print_alphabetx10- print alphabet ten times
 *
 */
void print_alphabetx10(void)
{
	char ch;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
			putchar('\n');
		}
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabetx10();
	return (0);
}

