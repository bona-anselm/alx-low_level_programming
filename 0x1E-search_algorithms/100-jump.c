#include "search_algos.h"
#include <math.h>

/**
 * min - finds the minimum between two numbers
 *
 * @a: first number
 * @b: second number
 * Return: the minimum number
 */
size_t min(size_t a, size_t b)
{
	if (a < b)
		return a;
	else
		return b;
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: The value searched for or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = 0;

	if (array == NULL)
		return (-1);

	/* find the block that may contain the value */
	while (array[min(step, size - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (step > size - 1)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	/* linear search */
	while (prev <= min(step, size - 1))
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
