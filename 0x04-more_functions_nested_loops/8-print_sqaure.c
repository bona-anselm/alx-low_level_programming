#include "main.h"

/**
 * print_square - Prints a square
 * @size: Holds in data for the size
 *
 * Description: Prints a specfied size of square0
 * Return: 0 always
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}

