#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: Little Endian
 */

int get_endianness(void)
{
	int a = 1;
	char *p = (char *)&a;

	return (*p == 1);
}
