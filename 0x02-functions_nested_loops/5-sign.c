#include "main.h"

/**
 * print_sign - prints the sign of number
 * Description: a function that prints the sign of a number.
 * @n: place holder for the number
 * Return: 1 if number is greate than zero or 0 if num is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
