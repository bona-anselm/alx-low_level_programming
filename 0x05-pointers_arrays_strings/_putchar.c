#include <unistd.h>
/**
 * _putchar - prints character to stdout
 * @c: Holds to be printed
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
