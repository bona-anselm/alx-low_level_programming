#include <stdio.h>
#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: Holds input data for destination strings
 * @src: Holds input data for source strings
 *
 * Description: Concatenate source and destinations strings
 * Return: A pointer to the  concatenated string
 */
char *_strcat(char *dest, char *src)
{

	char *temp;

	temp = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (temp);
}
