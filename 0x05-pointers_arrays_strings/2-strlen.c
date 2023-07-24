#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string under consideration
 *
 */
int _strlen(char *s)
{
	int d = 0;

	while (*s != '\0')
	{
		d++;
		s++;
	}
	return (d);
}
