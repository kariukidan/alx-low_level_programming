#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string to print
 *
 */
void print_rev(char *s)
{
	int d = 0;
	char *e = s;

	while ( *e != '\0')
	{
		d++;
		e++;
	}
	e--;

	while (d > 0)
	{
		_putchar(*e);
		e--;
		d--;
	}
	_putchar('\n');
}
