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
	char *str;

	str = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	return (str);
}
