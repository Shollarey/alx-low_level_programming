#include "main.h"

/**
 * print_alphabet_x10 - print all letters of the alphabet 10x
 *
 * Return: return 0 always
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
