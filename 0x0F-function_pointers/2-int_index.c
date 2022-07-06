#include "function_pointers"

/**
 * int_index - searches for an integer
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * @array: The array of integers
 *
 * Return: If no element matches or size <= 0 - -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int x;

	if (size <= 0)
		return (-1);

	if (!array || !size || !cmp)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}
