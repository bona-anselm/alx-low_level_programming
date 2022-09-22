#include "main.h"


/**
 * string_toupper - Converts lower case characters to upper.
 * @t: an input data
 *
 * Description: Converts lower to upper case character
 * Return: Pointer to the modified string
 */
char *string_toupper(char *t)
{
	int i;
	char *temp = t;

	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] >= 'a' && t[i] <= 'z')

			t[i] -= 32;
	}

	return (temp);
}
