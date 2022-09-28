#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Uses recursion to determine string length
 * @s: Holds the string data to be printed
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{

		return (1 + _strlen_recursion(s + 1));
	}

	return (0);

}


