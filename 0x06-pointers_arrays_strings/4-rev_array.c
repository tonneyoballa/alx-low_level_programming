#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < n--; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
