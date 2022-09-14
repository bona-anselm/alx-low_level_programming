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
	char k;

	int lower = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (c == k)

			lower = 1;
	}

	return (lower);

}
