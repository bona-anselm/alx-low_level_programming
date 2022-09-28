#include "main.h"
#include <stdio.h>

/**
 * get_sqrt - Finds the square root of two numbers
 * @x: Holds the x data
 * @y: Holds the y data
 *
 * Return: square root
 */

int get_sqrt(int x, int y)
{
	if (y * y > x)

		return (-1);

	else if (y * y == x)

		return (y);

	else
		return (get_sqrt(x, y + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Holds theinput data for n
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)

		return (0);

	return (get_sqrt(n, 1));
}
