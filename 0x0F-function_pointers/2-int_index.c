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

