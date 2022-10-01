#include <stdlib.h>
#include <stdio.h>

/**
 * main - A function prints its name
 * @argc: Holds argument count
 * @argv: Holds an array of strings of all argument passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("My name is: %s\n", argv[0]);

	return (0);
}
