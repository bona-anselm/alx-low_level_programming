#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Holds data
 *
 * Description: Prints a string to stdout followed by a new line
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
