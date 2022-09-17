#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 * Description: Prints numbers 0 & 9 starting from 0
 * Return: 0 always
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i);

	_putchar('\n');

}
