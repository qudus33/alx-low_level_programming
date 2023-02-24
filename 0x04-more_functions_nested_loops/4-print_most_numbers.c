#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9 and skip 2 and 4
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
