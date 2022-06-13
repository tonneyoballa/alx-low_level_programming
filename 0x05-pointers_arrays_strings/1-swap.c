#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: An integer to swap
 * @b: Another integer to swap
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
