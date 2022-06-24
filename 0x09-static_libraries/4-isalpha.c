#include "main.h"
/**
 * _isalpha - checkes is c is a letter
 *
 * @c: character being checked
 * Return: 1 if c is a letter if not 0
 */
int _isalpha(char c)
{
if (c < 65 || c > 122)
{
	return (0);
}
else
{
	return (1);
}
}
