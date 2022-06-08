#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: number being printed
 * Return: 1 or 0 or -1 for diff output
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
