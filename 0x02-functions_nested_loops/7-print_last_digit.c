#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @b: the integer
 * Return: value of last digit
 */
int print_last_digit(int b)
{
	if (b < 0)
	{
		b = -(b % 10);
	}
	else if (b > 0)
	{
		b = b % 10;
	}
	else
	{
		b = 0;
	}
	_putchar(b + '0');
	return (b);
}
