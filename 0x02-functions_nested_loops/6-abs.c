#include "main.h"

/**
 * _abs - prints absolute number
 * Description: a function that computes the absolute value of an integer
 * @c: placeholder to check for value
 * Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	else
	{
		return (c);
	}
}

