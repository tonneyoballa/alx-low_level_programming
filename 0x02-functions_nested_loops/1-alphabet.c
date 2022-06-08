#include "main.h"
/**
 * main - check the code
 *
 * Description: print_alphabet - prints the alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar (alphabets);
	}
	_putchar('\n');
}
