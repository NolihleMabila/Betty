#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num : input number
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	int remainder;

	remainder = num % 10;

	if (remainder < 0)
	{
		_putchar (-remainder + '0');
		return (-remainder);
	}
	else
	{
		_putchar (remainder + '0');
		return (remainder);
	}
	_putchar('\n');
}

