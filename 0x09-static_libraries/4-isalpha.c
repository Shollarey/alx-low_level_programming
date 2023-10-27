#include "main.h"
/**
 * _isalpha - checks for lower case
 * Description: function checks for lower case and return 1 if true
 * @c: the character to check
 * Return: return 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
