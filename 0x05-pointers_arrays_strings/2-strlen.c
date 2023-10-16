#include "main.h"

/**
 * _strlen - retuns the legth of a string
 * @s: string to be checked
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
