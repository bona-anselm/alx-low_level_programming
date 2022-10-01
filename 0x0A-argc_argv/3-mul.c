#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the multiple of two numbers
 * @argc: Holds argument count
 * @argv: Holds an array of strings of all argument passed
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	res = num1 * num2;

	printf("%i\n", res);

	return (0);
}
