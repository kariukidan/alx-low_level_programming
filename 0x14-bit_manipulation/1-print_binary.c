#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shi;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shi = 0; (temp >>= 1) > 0; shi++)
		;

	for (; shi >= 0; shi--)
	{
		if ((n >> shi) & 1)
			printf("1");
		else
			printf("0");
	}
}
