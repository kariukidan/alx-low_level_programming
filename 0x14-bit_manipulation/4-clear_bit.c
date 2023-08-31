#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 63)
		return (-1);

	o = 1 << index;

	if (*n & o)
		*n ^= o;

	return (1);
}
