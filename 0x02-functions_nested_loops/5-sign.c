#include main.h

/**
 * print_sign - prints the sign of a number
 *
 * @n : number ASCII code
 *
 *Return: 0 (positive). 1 (zero)  -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar ('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	putchar('\n');
	}
}
