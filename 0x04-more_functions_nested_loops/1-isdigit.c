#include "main.h"

/**
 * _isdigit - Checks if an input is a number
 * @c: Holds the input data
 *
 * Description: Checks whether input is between 0 & 9
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
