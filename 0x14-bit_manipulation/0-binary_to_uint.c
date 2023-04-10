#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Convert  binary to unsigned in
 * @b: value to convert
 * Return: value
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		value = (value << 1) + (*b++ - '0');
		}
	return (value);
}
