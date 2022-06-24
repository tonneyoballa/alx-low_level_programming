#include "main.h"

/**
 * *_strncat - links to strings using most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int z;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x] = '\0';
	return (dest);
}
