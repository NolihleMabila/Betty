#include "main.h"

/**
 * get_bit -  purpose is to return the
 * value of a bit at a given index.
 * @n: The bit number
 * @index: index values
 *
 * Return: If fails returns -1
 * Sucess return value of bit at given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
