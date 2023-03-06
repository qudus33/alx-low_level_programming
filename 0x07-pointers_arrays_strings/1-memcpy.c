#include <stdio.h>
#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest: mem to be copied
 * @src: mem where to be copied
 * @n: num bytes to change
 * Return: constant byte dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
