#include "main.h"

/**
 * get_bit - value of a bit at a given index.
 * @n: value
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: bit of the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
