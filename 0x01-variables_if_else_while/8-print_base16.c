#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char low = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (low <= 'f')
	{
		putchar(low);
		low++;
	}
	putchar('\n');

	return (0);
}
