#include "main.h"

/**
 * flip_bits - no of bits needed to flip to get from one number to another.
 * @n: value
 * @m: get value of bit flipped
 * Return: count
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int count = 0;

	while (xor_value != 0)
	{
		count += xor_value & 1;
		xor_value >>= 1;
	}
	return (count);
}
