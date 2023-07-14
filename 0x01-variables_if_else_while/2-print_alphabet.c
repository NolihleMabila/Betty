#include <stdio.h>
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
	}
	 return 0;
}
