#include "main.h"
#include <string.h>

/**
 * _puts - print a string followed by a new line
 *
 * @str: string to print
 */
void _puts(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
