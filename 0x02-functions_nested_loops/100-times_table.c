#include "main.h"

/**
 * print_times_table - prints 14 times table
 * #n: Holds input integer
 *
 * Description: Prints 14 times table starting with 0
 * Return: void
 */
void print_ times_table(void)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			
				print_format(i * j);

			_putchar('\n');
			
			
	
		}


	}
}

/**
 * print_format - formats output
 * @n: Holds number to format
 *
 * Return: nothing
 */
void print_format(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
