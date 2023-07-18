#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Returns: 1 if number is positive 0 if equal to zero
 * and -1 if negative
 */
int print_sign(int n)
{
	int n = 0;

	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
