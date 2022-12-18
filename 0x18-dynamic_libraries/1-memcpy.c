#include "main.h"


/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory area
 * @n: Holds integer data for the number of bytes
 * @src: Pointer to the memory source to be copied
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
