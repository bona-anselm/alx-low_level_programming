#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints natrual numbers
 * @n: Hold integer input
 *
 * Description: Prints all natural numbers from n to 98
 * Return: 1
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
