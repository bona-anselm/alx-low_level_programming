#include "main.h"

/**
 * main - Prints the string "_putchar"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[8] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
