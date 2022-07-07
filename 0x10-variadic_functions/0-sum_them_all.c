#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: input number
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list xz;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(xz, n);

	for (a = 0; a < n; a++)
		sum += va_arg(xz, int);

	va_end(xz);
	return (sum);
}
