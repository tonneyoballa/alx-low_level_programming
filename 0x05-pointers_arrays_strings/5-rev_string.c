#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int l, e, x;
	char *y, n;

	y = s;
	
	while (s[e] != '\0')
	{
		e++;
	}

	for (x = 1; x < e; x++)
	{
		y++;
	}

	for (l = 0; l < (e / 2); l++)
	{
		n = s[l];
		s[l] = *y;
		*y = n;
		y--;
	}

}
