#include "holberton.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: Holds input character
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
