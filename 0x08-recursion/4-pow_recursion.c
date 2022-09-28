#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to power y
 * @x: Holds the number data for x
 * @y: Holds the data for y
 *
 * Return: Returns x to power y value0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}


