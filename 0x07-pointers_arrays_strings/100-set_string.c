#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: point to be copied from
 * @to: where s gets set to
 *
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
