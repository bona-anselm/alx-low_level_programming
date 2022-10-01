#include <stdlib.h>
#include <stdio.h>

/**
 * main - A function that prints the arguments it recives
 * @argc: Holds argument count
 * @argv: Holds an array of strings of all argument passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
