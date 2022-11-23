#include <stdio.h>
#include <inttypes.h>

/**
 * main - Prints different integral data sizes to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	uint64_t d;
	float e;

	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %" PRIu64 " byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
