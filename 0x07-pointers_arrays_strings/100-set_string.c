#include "main.h"


/**
 * set_string - sets the value of a pointer to a char
 * @s: Holds the data of pointer to change
 * @to: Holds the value to change the pointer to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
