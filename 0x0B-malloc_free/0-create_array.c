#include <stdlib.h>

/**
 * create_array - create array of chars initialized with specific char
 * @size: Holds size of the array data
 * @c: Holds char data to initialize with
 *
 * Return: Pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(c));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
