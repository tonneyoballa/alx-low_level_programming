#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *
 * @c: char to print
 * @size: the memory size to print
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unasigned int i = 0;

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c
	}
	return (array);
}
