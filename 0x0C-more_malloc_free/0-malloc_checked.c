#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - Allocates memory using malloc
 * @b: Holds data for the memory needed
 *
 * Return: Pointer to the address of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *add;

	add = malloc(b);
	if (add == NULL)
		exit(98);

	return (add);
}
