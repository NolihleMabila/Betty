#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 *  int.
 * @b: binary number to be converted to int.
 *
 * Return: the unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int length, base_two;

	if (!b)
		return (0);

	num = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			num += base_two;
		}
	}

	return (num);
}
