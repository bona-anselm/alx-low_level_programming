#include "main.h"

/**
 * print_sign - prints number signs
 *@n: Holds input character
 *
 * Description: Prints 1 & + for +ve no, 0 for zero & -1 & - for -ve no
 * Return: 1, 0 or -1 depending of the number
 */
int print_sign(int n)
{
	int val;

	if (n > 0)
	{

		val = 1;
		_putchar('+');
	}

	else if (n == 0)
	{

		val = 0;
		_putchar('0');
	}

	else
	{

		val = -1;
		_putchar('-');
	}

	return (val);

}
