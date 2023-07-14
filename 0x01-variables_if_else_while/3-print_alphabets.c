#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
	char ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(tolower(ch));
	       	putchar(ch);
	}
	return 0;
}
