#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: The value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	print_arr(array, left, right);
	while (left != right)
	{
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
		print_arr(array, left, right);
	}
	return (-1);

}

/**
 * print_arr - prints the array being searched every time it changes
 * @arr: The array to be printed
 * @left: First index to be printed
 * @right: Last index to be printed
 * Return: Nothing
 */
void print_arr(int *arr, size_t left, size_t right)
{
	char *separator = NULL;

	printf("Searching in array: ");
	while (left <= right)
	{
		if (separator != NULL)
			printf("%s%d", separator, arr[left]);
		else
			printf("%d", arr[left]);
		separator = ", ";
		left++;
	}
	printf("\n");
}
