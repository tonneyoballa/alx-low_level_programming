#include "main.h"
#include <stdlib.h>

/**
 * _stoi - converts chars to ints
 * @c: char to convert
 * Return: converted int
 */

unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - calculates the length of the string
 * @s: input
 * Return: length of string
 */
unsigned int _strlen(char const *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is 1 or more charse
 *         in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len, sum, basePwr;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	len = _strlen(b);
	sum = 0;
	for (i = 0, j = len; i < len; i++, j--)
	{
		basePwr = _pow(2, j - 1);
		sum += (((b[i]) - '0') * basePwr);
	}
	return (sum);
}
