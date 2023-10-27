#include "main.h"

/**
 * _isdigit - checks if an input is digit
 * @c: number to be checked if it is a digit
 *
 * Return: 1 if it is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
