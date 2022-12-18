#include "main.h"

/**
 * _isalpha - checks for alphabets
 *@c: Holds input character
 *
 * Description: Checks if a character is a letter irrespective of the case
 * Return: 1 if is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{

		if (c == lower || c == upper)

			return (1);
		}
	}

	return (0);

}
