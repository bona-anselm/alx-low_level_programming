#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string
 * @src: Pointer the string source
 * @dest: Pointer to the string destination
 *
 * Description: Copies a string from source to destination
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = (*src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (src);
}
