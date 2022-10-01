#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * 
 * @c: Holds input character
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _islower(int c)
{
	char lower = 'a';
	int islower = 0;

	for (; lower <= 'a'; lower++)
	{
		if (c == lower)
		{
			islower = 1;
			break;
		}
	}

	return (islower);
}
