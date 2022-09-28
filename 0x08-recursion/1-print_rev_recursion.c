#include "main.h"

/**
 * _print_rev_recursion - Uses recursion to print strings in reverse
 * @s: Holds the string data to be printed
 *
 * Return: The string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}

}


