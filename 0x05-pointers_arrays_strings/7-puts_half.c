#include "main.h"
#include <string.h>

/**
 * puts_half - print other character
 * @str: string to print.
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int half_length = length / 2;

	for (i = half_length; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
