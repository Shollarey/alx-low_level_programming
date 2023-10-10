#include "main.h"
/**
 * _islower - checks for lower case
 * Description: function checks for lower case and return 1 if true
 * @c: the character to check
 * Return: return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
