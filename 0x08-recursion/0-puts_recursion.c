#include "main.h"

/**
 * _puts_recursion - Uses recursion to print strings
 * @s: Holds the string data to be printed
 *
 * Return: The string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);

}


