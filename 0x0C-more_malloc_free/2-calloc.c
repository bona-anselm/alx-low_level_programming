#include <stdlib.h>

/**
 * _calloc - Allocates memory for array of nmemb elements of size bytes
 * @nmemb: Holds data forNumber of elemnts
 * @size: Holds data for size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int ar_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar_size = nmemb * size;
	ar = malloc(ar_size);

	if (ar == NULL)
		return (NULL);

	while (i < ar_size)
	{
		ar[i] = 0;
		i++;
	}

	return (ar);
}
