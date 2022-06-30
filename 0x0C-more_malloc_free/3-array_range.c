#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * if min > max, return NULL
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int x, y, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0, y = min; y <= max; x++, y++)
		array[x] = y;

	return (array);
}
