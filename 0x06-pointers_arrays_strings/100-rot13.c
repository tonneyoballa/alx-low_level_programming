#include "main.h"

/**
 * rot13 - encodes a string
 * @s: string to be encoded
 *
 * Return: resulting string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[j] != '\0'; j++)
	{
		if (s[i] == a[j])
		{
			s[i] = b[j];
			break;
		}
	}
	return (s);
}
