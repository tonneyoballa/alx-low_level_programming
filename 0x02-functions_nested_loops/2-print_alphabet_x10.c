#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints the alphabet in lowercase ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i;
char letter;

for (i = 0; i < 10; i++)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
}

