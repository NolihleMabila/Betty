#include "main.h"

/**
 * clear_bit-  purpose it to sets the value of
 *  a bit at a given index to 0 --
 * @n: bit pointer
 * @index: The index of the bit
 *
 * Return: Sucess 1 faiure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
