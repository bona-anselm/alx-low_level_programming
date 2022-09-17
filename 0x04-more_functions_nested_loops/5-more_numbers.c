#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 10x
 *
 * Description: Prints numbers 0-9 10x starting from 0
 * Return: 0 always
 */
void more_numbers(void)
{
	int i, j;


	for (j = '1'; j <= 10; j++)

		for (i = '0'; i < 14; i++)

			_putchar(i);

	_putchar('\n');

}
