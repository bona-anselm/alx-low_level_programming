#include <unistd.h>

/**
 * _putchar - prints characters to stdout
 * @a: The character to be printed
 *
 * Return: ALways 0 on success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
