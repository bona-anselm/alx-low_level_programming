#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds postive numbers
 * @argc: Holds argument count
 * @argv: Holds an array of strings of all argument passed
 *
 * Return: 0 if no args is passed, 1 on error, added number
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		
		res += atoi(argv[num1]);
	}

	printf("%d\n", res);
	return (0);	
}
