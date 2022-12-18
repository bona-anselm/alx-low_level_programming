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

	int i, dest_len, src_len;

	dest_len = 0;
	src_len = 0;

	while (dest[dest_len] != '\0')

		dest_len++;

	while (src[src_len] != '\0')

		src_len++;

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
