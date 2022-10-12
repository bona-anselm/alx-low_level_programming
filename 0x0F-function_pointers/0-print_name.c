#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: Holds the input name data.
 * @f: The function pointer.
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}


