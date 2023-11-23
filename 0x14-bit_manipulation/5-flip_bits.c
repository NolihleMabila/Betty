#include "main.h"

/**
 * flip_bits - evaluates the number of bits required in
 * order to flip from one number to another.
 * @n: The number to be flipped.
 * @m: desired number.
 *
 * Return: number of bits recquirex to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m, bits = 0;

	while (num > 0)
	{
		bits += (num & 1);
		num >>= 1;
	}

	return (bits);
}
