#include "main.h"
/**
 * _islower - checks if a character is in lower case
 *
 * @c: checks for letter c if it is in lower case
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(char c)
{
if (c < 97 || c > 122)
{
	return (0);
}
else
{
	return (1);
}
}
