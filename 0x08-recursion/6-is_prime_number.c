#include "main.h"
#include <stdio.h>

/**
 * find_prime - searches for a prime numbe
 * @x: Hold the data for x the number to checked
 * @y: Holds data y
 *
 * Return: result
 */

int find_prime(int x, int y)
{
	if (x <= 1 || x % y == 0)

		return (0);

	else if (x == y)

		return (1);

	else if (x > y)

		find_prime(x, y + 1);

	return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number or not
 * @n: Holds the integer data n to be checked
 *
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
