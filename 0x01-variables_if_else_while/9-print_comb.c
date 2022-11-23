#include <stdio.h>

/**
 * main - Prints all possible combination of a single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
		if (n <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
