#include "main.h"

/**
 * print_last_digit - Prints last digit
 *  *@n: Holds input character
 *
 * Description: Prints the last digit in number
 * Return: returns last digit number
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)

		i = -1 * (n % 10);

	else

		i = n % 10;

	_putchar((i % 10) + '0');

	return (i % 10);
}

