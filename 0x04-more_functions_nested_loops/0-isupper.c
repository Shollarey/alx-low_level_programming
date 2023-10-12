#include "main.h"

/**
 * _isupper - Chck if a letter is upper case
 * @c: The number to be checked
 *
 * Return: 1 for upper case or 0 for lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
