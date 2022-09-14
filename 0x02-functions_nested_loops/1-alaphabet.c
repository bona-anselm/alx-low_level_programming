#include "main.h"
 
/**
 * print_alphabet - prints the alphabet
 * @k: holds the index for iteration
 *
 * Description: Prints alphabets in lower case
 *Return: Nothing
 */
void print_alaphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)

		_putchar(k);

	_putchar('\n');

}
