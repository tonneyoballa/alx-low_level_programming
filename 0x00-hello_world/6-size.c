#include <stdio.h>

/**
 * main - my entry point
 *
 * Description: print all sizes in c
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;

	int long c;
	int long long d;
	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu btye(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu btye(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
