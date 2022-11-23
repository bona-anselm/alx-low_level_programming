#include "main.h"

/**
 * _islower - checks character cases
 *@c: Holds input character
 *
 * Description: Checks if a character is in lower case
 * Return: 1 if is lower and 0 otherwise
 */
int _islower(int c)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);

}
