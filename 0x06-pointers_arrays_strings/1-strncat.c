#include <stdio.h>
#include "main.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: Holds input data for destination strings
 * @src: Holds input data for source strings
 * @n: Holds integer data
 *
 * Description: Concatenate source and destinations strings
 * Return: A pointer to the  concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{

	char *start, *end;
	int i, src_len;

	start = src;
	end = dest;
	src_len = 0;

	while (*src)
	{
		src_len++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > src_len)
	{
		n = src_len;
	}
	src = start;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\n';

	return (end);
}
