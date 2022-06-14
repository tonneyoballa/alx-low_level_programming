#include"main.h"

/**
 * _puts2 - Prints pair values.
 * @str: the string to be treated
 *
 * Return: 0
 */
void _puts2(char *str)
{
	int n;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (n = 0; n < a; n += 2)
	{
		_puts2(str[n]);
	}
	_putchar('\n');
}
