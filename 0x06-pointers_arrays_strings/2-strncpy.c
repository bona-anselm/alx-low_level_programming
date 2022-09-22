#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: Holds input data for destination strings
 * @src: Holds input data for source strings
 * @n: Holds integer input data
 *
 * Description: Concatenate source and destinations strings
 * Return: A pointer to the copied  string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len, i;
	char *temp = 0;
	char *start = 0;

	src_len = 0;
	start = src;
	temp = dest;

	while (*src)
	{
		src_len++;
		src++;
	}

	src_len++;

	if (n > src_len)

		n = src_len;
	src = start;

	for (i = 0; i < n; i++)

		*dest++ = *src++;

	return (temp);
}
