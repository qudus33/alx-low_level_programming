#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: start address
 * @b: desired value to fill
 * @n: num bytes to change
 * Return: constant byte s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
