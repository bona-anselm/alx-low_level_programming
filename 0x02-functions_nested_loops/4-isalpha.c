#include "main.h"

/**
 * _isalpha - checks for alphabets
 *@c: Holds input character
 *
 * Description: Checks if a character is lower or upper case
 * Return: 1 if is lower and 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;

	int isalpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{

		if (c == lower || c == upper)

			isalpha = 1;
		}
	}

	return (isalpha);

}
