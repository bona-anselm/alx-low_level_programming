#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: Holds input data for s1 strings
 * @s2: Holds input data for s2 string
 *
 * Description: Concatenate source and destinations strings
 * Return: The difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])

			return (*s1 - *s2);

			s1++, s2++;

	}

	return (*s1 - *s2);

}
