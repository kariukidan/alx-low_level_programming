#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, pow;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, tot = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			tot += pow;
	}

	return (tot);
}
