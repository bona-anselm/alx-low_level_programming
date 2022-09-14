#include <unistd.h>


/**
 * main - Entry point
 * Description: It prints the word Holberton, followed by a new line.
 *
 * Return: 0.
 */

int _putchar(char c);

int main(void)
{
	char word[8] = "_putchar";
	
	int i;
	
	for (i = 0; i < 8; i++)

		_putchar(word[i]);

	_putchar('\n');

	return (0);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	
	return (write(1, &c, 1));

}
