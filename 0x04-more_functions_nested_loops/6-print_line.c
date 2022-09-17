#include "main.h"

/**
 * print_line - prints a straight line
 * @n: Holds the n data
 *
 * Description: draws a straigth line in the terminal0
 * Return: 0 always
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');

}
