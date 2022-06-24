#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s : String to count
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

		while (*s != '\0')
		{
			s++;
			len++;
		}

	return (len);
}
