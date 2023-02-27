#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values with pointers
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
