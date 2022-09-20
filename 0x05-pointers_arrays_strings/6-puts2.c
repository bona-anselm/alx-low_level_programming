#include "main.h"

/**
 * puts2 - Prints every other charater
 * @str: Holds input data
 *
 * Description: Prints every other character of a string
 * Return: Nothing
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len -= 1;

		for (i = 0; i <= len; i += 2)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
