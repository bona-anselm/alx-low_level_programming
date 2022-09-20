#include "main.h"

/**
 * rev_string - Reverses strings
 * @s: Holds input data
 *
 * Description: Prints string in reverse followed by newline
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, len;
	char str;

	i = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len--)
	{
		 str = s[i];
		 s[i++] = s[len];
		 s[len] = str;
	}
}
