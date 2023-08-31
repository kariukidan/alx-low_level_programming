#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number under consideration
 * @index: index
 *
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int keep;

	if (index > 64)
		return (-1);

	keep = n >> index;

	return (keep & 1);
}
