#include "main.h"

/**
 * print_rev - Prints strings in reverse
 * @s: Holds input data
 *
 * Description: Prints string in reverse followed by newline
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i)
		_putchar(s[--i]);

	_putchar('\n');
}
