#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return - Always 0 (Success)
 */
int main (void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
