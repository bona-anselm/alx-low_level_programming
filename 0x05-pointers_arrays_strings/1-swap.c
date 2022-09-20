#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @a: Holds data
 * @b: Holds data
 *
 * Description: Uses pointers to swap the values of two integers
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
