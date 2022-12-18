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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	for (i = 0; i < n; i++)

		dest[i] = '\0';

	return (dest);
}
