#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cn, base;
	int len;

	if (!b)
		return (0);

	cn = 0;
	
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (base = 1, len--; len >= 0; len--, base *= 2)
	{
		if (b[len] == '1')
			cn += base;
	}

	return (cn);
}
