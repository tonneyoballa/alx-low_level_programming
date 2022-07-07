#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number passed to the function
 * @separator: string to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list xz;
	unsigned int a;

	va_start(xz, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", (va_arg(xz, unsigned int)));

		if ((a != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(xz);
}
