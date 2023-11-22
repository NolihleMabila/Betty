#include "main.h"

/**
 * set_bit - main purpose it to sets the
 *  value of a bit at a given index to 1 --
 * @n: the pointer to the bit.
 * @index: index num
 *
 * Return: Sucess -1, faiure -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
