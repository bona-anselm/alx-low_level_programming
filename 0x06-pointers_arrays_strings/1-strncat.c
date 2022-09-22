#include <stdio.h>


/**
 * _strncat - Concatenates two strings
 * @dest: Holds input data for dest string
 * @src: Holds input data for source string
 * @n: Holds integer input data
 *
 * Descritpion: Concatenates two strings
 * Return: Destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, strlen_dest, strlen_src;

	strlen_dest = 0;
	strlen_src = 0;

	while (dest[strlen_dest] != '\0')
	{
		strlen_dest++;
	}

	while (src[strlen_src] != '\0')
	{
		strlen_src++;
	}


	for (i = 0; i <= strlen_src; i++)
	{
		if (strlen_src == n--)

		dest[strlen_dest + i] = src[i];
	}

	return (dest);

}
