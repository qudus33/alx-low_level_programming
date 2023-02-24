#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if a character is upper case
 * @c: character to check
 * Return: 1 for true and 0 for false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

