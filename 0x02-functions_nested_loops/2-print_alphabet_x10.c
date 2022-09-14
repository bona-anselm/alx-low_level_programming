#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 * Description: prints alphabets 10x in lower case
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char k;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		

		_putchar('\n');
	}

}
