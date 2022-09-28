#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial a given number
 * @n: Holds the number data
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 0)

		return (1);

	return (n * factorial(n - 1));
}


