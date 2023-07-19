#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
