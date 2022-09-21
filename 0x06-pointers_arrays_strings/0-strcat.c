#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: Holds input data for destination strings
 * @src: Holds input data for source strings
 *
 * Description: Concatenate source and destinations strings
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (0);
}
