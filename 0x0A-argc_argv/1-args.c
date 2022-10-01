#include <stdlib.h>
#include <stdio.h>

/**
 * main - A function that prints its number of aeguments
 * @argc: Holds argument count
 * @argv: Holds an array of strings of all argument passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	for (i = 0; i <= argc; i++)
	{}

	printf("%d\n", i - 2);

	return (0);
}
