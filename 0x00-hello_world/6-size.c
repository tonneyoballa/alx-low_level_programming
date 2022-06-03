#include <stdio.h>

/**
 * main - my entry point
 *
 * Description: print all sizes in c
 * Return: 0
 */
int main(void)
{
	char a;
	int b;

	int long c;
	int long long d;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of int: %zu btye(s)\n", sizeof(b));
	printf("Size of long int: %zu byte(s)\n", sizeof(c));
	printf("Size of long long int:%zu btye(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
