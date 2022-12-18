#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Holds data
 *
 * Description: Iterates though a string and return the length
 * Return: 0 always
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')

		i++;

	return (i);
}
