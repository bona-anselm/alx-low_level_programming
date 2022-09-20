#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an arrray
 * @a: an input array
 * @n: an input integer
 *
 * Description: Prints elements of an array of integers followed by a line
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)

			printf(", ");
	}
	putchar('\n');
}
