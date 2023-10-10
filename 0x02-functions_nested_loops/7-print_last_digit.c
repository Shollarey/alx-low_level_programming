#include "main.h"

/**
 * print_last_digit - prints last digit
 * Description: a function that prints the last digit of a number.
 * @c: checks for number
 * Return: last digit
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		int abs;
		int last_digit_abs;

		abs = c * -1;
		last_digit_abs = abs % 10;
		_putchar(last_digit_abs + '0');
		return (last_digit_abs);
	}
	else
	{
		int last_digit;

		last_digit = c % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
