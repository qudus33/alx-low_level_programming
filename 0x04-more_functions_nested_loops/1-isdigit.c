#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check if a char is a digit
 * @c: char to check
 * Return: 1 for true or 0 for false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
